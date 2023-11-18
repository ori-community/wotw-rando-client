#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UsedByNativeCodeAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Scripting::UsedByNativeCodeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::UsedByNativeCodeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::UsedByNativeCodeAttribute * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::UsedByNativeCodeAttribute * this_ptr, app::String* value))
} // namespace app::classes::UnityEngine::Scripting::UsedByNativeCodeAttribute
