#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationSource.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Xml::Serialization::SerializationSource {
    IL2CPP_REGISTER_METHOD(0x01C90210, void, ctor, (app::SerializationSource * this_ptr, app::String* namspace, app::Type__Array* included_types))
    IL2CPP_REGISTER_METHOD(0x01C90220, bool, BaseEquals, (app::SerializationSource * this_ptr, app::SerializationSource* other))
} // namespace app::classes::System::Xml::Serialization::SerializationSource
