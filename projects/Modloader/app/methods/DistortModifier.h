#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DistortModifier.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>

namespace app::classes::DistortModifier {
    IL2CPP_REGISTER_METHOD(0x00B99D90, app::IEnumerable_1_System_String_*, GetKeywordsForShader, app::DistortModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B99F20, void, ApplyMultipliers, app::DistortModifier* this_ptr, float strength, float speed)
    IL2CPP_REGISTER_METHOD(0x00B99FF0, void, SetProperties, app::DistortModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B9A120, float, GetQuadExpandSize, app::DistortModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, app::DistortModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Randomize, app::DistortModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B9A210, void, ctor, app::DistortModifier* this_ptr)
} // namespace app::classes::DistortModifier
