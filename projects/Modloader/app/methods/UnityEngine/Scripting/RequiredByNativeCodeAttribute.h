#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Scripting::RequiredByNativeCodeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::RequiredByNativeCodeAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::RequiredByNativeCodeAttribute * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::RequiredByNativeCodeAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_Optional, (app::RequiredByNativeCodeAttribute * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00533170, void, set_GenerateProxy, (app::RequiredByNativeCodeAttribute * this_ptr, bool value))
} // namespace app::classes::UnityEngine::Scripting::RequiredByNativeCodeAttribute
