#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::Internal::DirectConverters::LayerMask_DirectConverter {
    IL2CPP_REGISTER_METHOD(0x0164FB40, app::fsResult, DoSerialize, (app::LayerMask_DirectConverter * this_ptr, app::LayerMask model, app::Dictionary_2_System_String_FullSerializer_fsData_ * serialized))
    IL2CPP_REGISTER_METHOD(0x0164FC70, app::fsResult, DoDeserialize, (app::LayerMask_DirectConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_ * data, app::LayerMask * model))
    IL2CPP_REGISTER_METHOD(0x0164FDC0, app::Object *, CreateInstance, (app::LayerMask_DirectConverter * this_ptr, app::fsData * data, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x0164FE50, void, ctor, (app::LayerMask_DirectConverter * this_ptr))
}
