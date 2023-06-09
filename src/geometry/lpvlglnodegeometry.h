/* ---------------------------------------------------------------------
 * LPVL - Linear Algebra, Plotting and Visualisation Library
 * Copyright (C) 2023 whs31.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero Public License version 3 as
 * published by the Free Software Foundation.
 * http://www.gnu.org/licenses.
 *
 * github.com/whs31/lpvl
 * ---------------------------------------------------------------------- */

#pragma once

#include "LPVL/Global"
#include "LPVL/Enums"
#include "LPVL/Point2D"
#include "lpvlglvertex.h"
#include <vector>

using std::vector;

class QSGGeometry;
class QSGFlatColorMaterial;
class QSGGeometryNode;

namespace LPVL
{
    namespace scenegraph
    {
        LPVL_EXPORT QSGGeometry* createLineStripNode(const vector<float>& v, float dx, float dy, float w, float h, float line_width = 1);
        LPVL_EXPORT QSGGeometry* createSimpleGraphNode(const vector<float>& v, float dx, float dy, float w, float h);

        LPVL_EXPORT QSGFlatColorMaterial* createFlatTransparentMaterial(const QString& col, float alpha = 1);

        LPVL_EXPORT QSGGeometryNode* createBackgroundNode(const QString& col, float w, float h);
        LPVL_EXPORT QSGGeometryNode* createLineStripNode(const vector<float>& v, float dx, float dy, float w, float h, const QString& col, float alpha = 1, float line_width = 1);
        LPVL_EXPORT QSGGeometryNode* createGraphNode(const vector<float>& v, float dx, float dy, float w, float h, const QString& col, float alpha = 1);
    } // scenegraph

    namespace calc
    {
        LPVL_EXPORT Boundaries boundArray(const vector<Point2D>& vec) noexcept;
        LPVL_EXPORT CoordDelta deltaBound(float w, float h, const Boundaries& bounds) noexcept;
    } // calc

    namespace internal
    {
        LPVL_EXPORT float mqi_zoom_ratio(double lat, float m_to_px_ratio = 1) noexcept;
    } // internal
} // LPVL
