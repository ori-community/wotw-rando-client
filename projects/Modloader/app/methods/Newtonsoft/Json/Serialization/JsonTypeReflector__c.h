#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JsonTypeReflector_c.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonTypeReflector___c {
    IL2CPP_REGISTER_METHOD(0x01BFB110, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JsonTypeReflector_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BFB250, app::Type*, _GetCreator_b__22_1, (app::JsonTypeReflector_c * this_ptr, app::Object* param))
    IL2CPP_REGISTER_METHODINFO(0x047128B8, JsonTypeReflector_c__GetCreator_b__22_1__MethodInfo)
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonTypeReflector___c
