#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::Internal::DirectConverters::GUIStyleState_DirectConverter {
    IL2CPP_REGISTER_METHOD(0x0164BB60, app::fsResult, DoSerialize, (app::GUIStyleState_DirectConverter * this_ptr, app::GUIStyleState * model, app::Dictionary_2_System_String_FullSerializer_fsData_ * serialized))
    IL2CPP_REGISTER_METHOD(0x0164BEC0, app::fsResult, DoDeserialize, (app::GUIStyleState_DirectConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_ * data, app::GUIStyleState * * model))
    IL2CPP_REGISTER_METHOD(0x0164C1E0, app::Object *, CreateInstance, (app::GUIStyleState_DirectConverter * this_ptr, app::fsData * data, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x0164C360, void, ctor, (app::GUIStyleState_DirectConverter * this_ptr))
}
