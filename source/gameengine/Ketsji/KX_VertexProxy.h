/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file KX_VertexProxy.h
 *  \ingroup ketsji
 */

#ifndef __KX_VERTEXPROXY_H__
#define __KX_VERTEXPROXY_H__

#ifdef WITH_PYTHON

#include "EXP_Value.h"

class RAS_ITexVert;
class RAS_IDisplayArray;

class KX_VertexProxy : public CValue
{
	Py_Header

protected:
	RAS_ITexVert *m_vertex;
	RAS_IDisplayArray *m_array;

public:
	KX_VertexProxy(RAS_IDisplayArray *array, RAS_ITexVert *vertex);
	virtual ~KX_VertexProxy();

	RAS_ITexVert *GetVertex();
	RAS_IDisplayArray *GetDisplayArray();

	// stuff for cvalue related things
	STR_String GetName();

	static PyObject *pyattr_get_x(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_y(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_z(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_r(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_g(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_b(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_a(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_u(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_v(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_u2(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_v2(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_XYZ(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_UV(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_color(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_colors(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_normal(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static PyObject *pyattr_get_uvs(void *self_v, const KX_PYATTRIBUTE_DEF *attrdef);
	static int pyattr_set_x(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_y(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_z(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_u(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_v(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_u2(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_v2(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_r(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_g(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_b(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_a(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_XYZ(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_UV(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_color(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_colors(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_normal(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);
	static int pyattr_set_uvs(void *self, const KX_PYATTRIBUTE_DEF *attrdef, PyObject *value);

	KX_PYMETHOD_NOARGS(KX_VertexProxy, GetXYZ);
	KX_PYMETHOD_O(KX_VertexProxy, SetXYZ);
	KX_PYMETHOD_NOARGS(KX_VertexProxy, GetUV1);
	KX_PYMETHOD_O(KX_VertexProxy, SetUV1);

	KX_PYMETHOD_NOARGS(KX_VertexProxy, GetUV2);
	KX_PYMETHOD_VARARGS(KX_VertexProxy, SetUV2);

	KX_PYMETHOD_NOARGS(KX_VertexProxy, GetRGBA);
	KX_PYMETHOD_O(KX_VertexProxy, SetRGBA);
	KX_PYMETHOD_NOARGS(KX_VertexProxy, GetNormal);
	KX_PYMETHOD_O(KX_VertexProxy, SetNormal);
};

#endif  // WITH_PYTHON

#endif  // __KX_VERTEXPROXY_H__
