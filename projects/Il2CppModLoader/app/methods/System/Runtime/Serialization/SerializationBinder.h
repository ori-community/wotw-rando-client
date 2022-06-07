#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::SerializationBinder {
    IL2CPP_REGISTER_METHOD(0x01EDCA90, void, BindToName, (app::SerializationBinder * this_ptr, app::Type * serialized_type, app::String * * assembly_name, app::String * * type_name))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SerializationBinder * this_ptr))
}
