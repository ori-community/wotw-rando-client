#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/TurbulenceScaleModifier.h>

namespace app::classes::TurbulenceScaleModifier {
    IL2CPP_REGISTER_METHOD(0x00B14990, void, ApplyMultipliers, app::TurbulenceScaleModifier* this_ptr, float strength, float speed)
    IL2CPP_REGISTER_METHOD(0x00B19610, app::IEnumerable_1_System_String_*, GetBaseVertexTextureNames, app::TurbulenceScaleModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B19790, app::IEnumerable_1_System_String_*, GetKeywordsForShader, app::TurbulenceScaleModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B19920, void, Randomize, app::TurbulenceScaleModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, app::TurbulenceScaleModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B19A60, void, SetProperties, app::TurbulenceScaleModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B19BF0, void, ctor, app::TurbulenceScaleModifier* this_ptr)
} // namespace app::classes::TurbulenceScaleModifier
