#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StrongNameKeyPair.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Reflection::StrongNameKeyPair {
    IL2CPP_REGISTER_METHOD(0x026988E0, void, ctor, (app::StrongNameKeyPair * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02698A90, void, ISerializable_GetObjectData, (app::StrongNameKeyPair * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDeserializationCallback_OnDeserialization, (app::StrongNameKeyPair * this_ptr, app::Object* sender))
} // namespace app::classes::System::Reflection::StrongNameKeyPair
