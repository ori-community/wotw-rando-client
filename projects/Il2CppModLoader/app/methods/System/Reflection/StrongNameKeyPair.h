#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Reflection::StrongNameKeyPair {
    IL2CPP_REGISTER_METHOD(0x026988E0, void, ctor, (app::StrongNameKeyPair * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02698A90, void, ISerializable_GetObjectData, (app::StrongNameKeyPair * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDeserializationCallback_OnDeserialization, (app::StrongNameKeyPair * this_ptr, app::Object * sender))
}
