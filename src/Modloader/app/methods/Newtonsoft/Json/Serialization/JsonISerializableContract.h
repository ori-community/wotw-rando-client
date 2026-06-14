#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonISerializableContract.h>
#include <Modloader/app/structs/ObjectConstructor_1_System_Object_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonISerializableContract {
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::ObjectConstructor_1_System_Object_*, get_ISerializableCreator, app::JsonISerializableContract* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_ISerializableCreator, app::JsonISerializableContract* this_ptr, app::ObjectConstructor_1_System_Object_* value)
    IL2CPP_REGISTER_METHOD(0x01871FE0, void, ctor, app::JsonISerializableContract* this_ptr, app::Type* underlying_type)
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonISerializableContract
