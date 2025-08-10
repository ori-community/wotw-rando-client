#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaskExtraModifier.h>

namespace app::classes::MaskExtraModifier {
    IL2CPP_REGISTER_METHOD(0x00A10DA0, void, Randomize, app::MaskExtraModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A10DB0, void, ApplyMultipliers, app::MaskExtraModifier* this_ptr, float strength, float speed)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, app::MaskExtraModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A10E40, void, SetProperties, app::MaskExtraModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A10F30, void, ctor, app::MaskExtraModifier* this_ptr)
} // namespace app::classes::MaskExtraModifier
