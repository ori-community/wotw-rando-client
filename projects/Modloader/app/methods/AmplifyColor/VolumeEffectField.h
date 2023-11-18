#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VolumeEffectField.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AmplifyColor::VolumeEffectField {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_1, (app::VolumeEffectField * this_ptr, app::String* field_name, app::String* field_type))
    IL2CPP_REGISTER_METHOD(0x030D2DF0, void, ctor_2, (app::VolumeEffectField * this_ptr, app::FieldInfo_1* pi, app::Component_1* c))
    IL2CPP_REGISTER_METHOD(0x030D2EB0, bool, IsValidType, (app::String * type))
    IL2CPP_REGISTER_METHOD(0x030D3060, void, UpdateValue, (app::VolumeEffectField * this_ptr, app::Object* val))
} // namespace app::classes::AmplifyColor::VolumeEffectField
