#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationBinder.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Serialization::SerializationBinder {
    IL2CPP_REGISTER_METHOD(
        0x01EDCA90,
        void,
        BindToName,
        app::SerializationBinder* this_ptr,
        app::Type* serialized_type,
        app::String** assembly_name,
        app::String** type_name
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SerializationBinder* this_ptr)
} // namespace app::classes::System::Runtime::Serialization::SerializationBinder
