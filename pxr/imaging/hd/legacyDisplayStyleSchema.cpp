//
// Copyright 2021 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
////////////////////////////////////////////////////////////////////////
// This file is generated by a script.  Do not edit directly.  Edit the
// schema.template.cpp file to make changes.

#include "pxr/imaging/hd/legacyDisplayStyleSchema.h"
#include "pxr/imaging/hd/retainedDataSource.h"

#include "pxr/base/trace/trace.h"


PXR_NAMESPACE_OPEN_SCOPE

TF_DEFINE_PUBLIC_TOKENS(HdLegacyDisplayStyleSchemaTokens,
    HDLEGACYDISPLAYSTYLE_SCHEMA_TOKENS);



HdIntDataSourceHandle
HdLegacyDisplayStyleSchema::GetRefineLevel()
{
    return _GetTypedDataSource<HdIntDataSource>(
        HdLegacyDisplayStyleSchemaTokens->refineLevel);
}

HdBoolDataSourceHandle
HdLegacyDisplayStyleSchema::GetFlatShadingEnabled()
{
    return _GetTypedDataSource<HdBoolDataSource>(
        HdLegacyDisplayStyleSchemaTokens->flatShadingEnabled);
}

HdBoolDataSourceHandle
HdLegacyDisplayStyleSchema::GetDisplacementEnabled()
{
    return _GetTypedDataSource<HdBoolDataSource>(
        HdLegacyDisplayStyleSchemaTokens->displacementEnabled);
}

HdBoolDataSourceHandle
HdLegacyDisplayStyleSchema::GetOccludedSelectionShowsThrough()
{
    return _GetTypedDataSource<HdBoolDataSource>(
        HdLegacyDisplayStyleSchemaTokens->occludedSelectionShowsThrough);
}

HdTokenDataSourceHandle
HdLegacyDisplayStyleSchema::GetShadingStyle()
{
    return _GetTypedDataSource<HdTokenDataSource>(
        HdLegacyDisplayStyleSchemaTokens->shadingStyle);
}

HdTokenArrayDataSourceHandle
HdLegacyDisplayStyleSchema::GetReprSelector()
{
    return _GetTypedDataSource<HdTokenArrayDataSource>(
        HdLegacyDisplayStyleSchemaTokens->reprSelector);
}

HdTokenDataSourceHandle
HdLegacyDisplayStyleSchema::GetCullStyle()
{
    return _GetTypedDataSource<HdTokenDataSource>(
        HdLegacyDisplayStyleSchemaTokens->cullStyle);
}

/*static*/
HdContainerDataSourceHandle
HdLegacyDisplayStyleSchema::BuildRetained(
        const HdIntDataSourceHandle &refineLevel,
        const HdBoolDataSourceHandle &flatShadingEnabled,
        const HdBoolDataSourceHandle &displacementEnabled,
        const HdBoolDataSourceHandle &occludedSelectionShowsThrough,
        const HdTokenDataSourceHandle &shadingStyle,
        const HdTokenArrayDataSourceHandle &reprSelector,
        const HdTokenDataSourceHandle &cullStyle
)
{
    TfToken names[7];
    HdDataSourceBaseHandle values[7];

    size_t count = 0;
    if (refineLevel) {
        names[count] = HdLegacyDisplayStyleSchemaTokens->refineLevel;
        values[count++] = refineLevel;
    }

    if (flatShadingEnabled) {
        names[count] = HdLegacyDisplayStyleSchemaTokens->flatShadingEnabled;
        values[count++] = flatShadingEnabled;
    }

    if (displacementEnabled) {
        names[count] = HdLegacyDisplayStyleSchemaTokens->displacementEnabled;
        values[count++] = displacementEnabled;
    }

    if (occludedSelectionShowsThrough) {
        names[count] = HdLegacyDisplayStyleSchemaTokens->occludedSelectionShowsThrough;
        values[count++] = occludedSelectionShowsThrough;
    }

    if (shadingStyle) {
        names[count] = HdLegacyDisplayStyleSchemaTokens->shadingStyle;
        values[count++] = shadingStyle;
    }

    if (reprSelector) {
        names[count] = HdLegacyDisplayStyleSchemaTokens->reprSelector;
        values[count++] = reprSelector;
    }

    if (cullStyle) {
        names[count] = HdLegacyDisplayStyleSchemaTokens->cullStyle;
        values[count++] = cullStyle;
    }

    return HdRetainedContainerDataSource::New(count, names, values);
}

/*static*/
HdLegacyDisplayStyleSchema
HdLegacyDisplayStyleSchema::GetFromParent(
        const HdContainerDataSourceHandle &fromParentContainer)
{
    return HdLegacyDisplayStyleSchema(
        fromParentContainer
        ? HdContainerDataSource::Cast(fromParentContainer->Get(
                HdLegacyDisplayStyleSchemaTokens->displayStyle))
        : nullptr);
}

/*static*/
const HdDataSourceLocator &
HdLegacyDisplayStyleSchema::GetDefaultLocator()
{
    static const HdDataSourceLocator locator(
        HdLegacyDisplayStyleSchemaTokens->displayStyle
    );
    return locator;
} 
/*static*/
const HdDataSourceLocator &
HdLegacyDisplayStyleSchema::GetReprSelectorLocator()
{
    static const HdDataSourceLocator locator(
        HdLegacyDisplayStyleSchemaTokens->displayStyle,
        HdLegacyDisplayStyleSchemaTokens->reprSelector
    );
    return locator;
}

/*static*/
const HdDataSourceLocator &
HdLegacyDisplayStyleSchema::GetCullStyleLocator()
{
    static const HdDataSourceLocator locator(
        HdLegacyDisplayStyleSchemaTokens->displayStyle,
        HdLegacyDisplayStyleSchemaTokens->cullStyle
    );
    return locator;
}


HdLegacyDisplayStyleSchema::Builder &
HdLegacyDisplayStyleSchema::Builder::SetRefineLevel(
    const HdIntDataSourceHandle &refineLevel)
{
    _refineLevel = refineLevel;
    return *this;
}

HdLegacyDisplayStyleSchema::Builder &
HdLegacyDisplayStyleSchema::Builder::SetFlatShadingEnabled(
    const HdBoolDataSourceHandle &flatShadingEnabled)
{
    _flatShadingEnabled = flatShadingEnabled;
    return *this;
}

HdLegacyDisplayStyleSchema::Builder &
HdLegacyDisplayStyleSchema::Builder::SetDisplacementEnabled(
    const HdBoolDataSourceHandle &displacementEnabled)
{
    _displacementEnabled = displacementEnabled;
    return *this;
}

HdLegacyDisplayStyleSchema::Builder &
HdLegacyDisplayStyleSchema::Builder::SetOccludedSelectionShowsThrough(
    const HdBoolDataSourceHandle &occludedSelectionShowsThrough)
{
    _occludedSelectionShowsThrough = occludedSelectionShowsThrough;
    return *this;
}

HdLegacyDisplayStyleSchema::Builder &
HdLegacyDisplayStyleSchema::Builder::SetShadingStyle(
    const HdTokenDataSourceHandle &shadingStyle)
{
    _shadingStyle = shadingStyle;
    return *this;
}

HdLegacyDisplayStyleSchema::Builder &
HdLegacyDisplayStyleSchema::Builder::SetReprSelector(
    const HdTokenArrayDataSourceHandle &reprSelector)
{
    _reprSelector = reprSelector;
    return *this;
}

HdLegacyDisplayStyleSchema::Builder &
HdLegacyDisplayStyleSchema::Builder::SetCullStyle(
    const HdTokenDataSourceHandle &cullStyle)
{
    _cullStyle = cullStyle;
    return *this;
}

HdContainerDataSourceHandle
HdLegacyDisplayStyleSchema::Builder::Build()
{
    return HdLegacyDisplayStyleSchema::BuildRetained(
        _refineLevel,
        _flatShadingEnabled,
        _displacementEnabled,
        _occludedSelectionShowsThrough,
        _shadingStyle,
        _reprSelector,
        _cullStyle
    );
}


PXR_NAMESPACE_CLOSE_SCOPE