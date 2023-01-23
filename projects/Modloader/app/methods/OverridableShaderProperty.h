#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OverridableShaderProperty.h>

namespace app::classes::OverridableShaderProperty {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::OverridableShaderProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443340, void, ctor_2, (app::OverridableShaderProperty * this_ptr, app::OverridableShaderProperty* shader_property))
    IL2CPP_REGISTER_METHOD(0x00443370, void, Apply, (app::OverridableShaderProperty * this_ptr, app::OverridableShaderProperty* shader_property))
} // namespace app::classes::OverridableShaderProperty
