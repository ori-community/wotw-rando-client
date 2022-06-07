#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::DelegateSerializationHolder_DelegateEntry {
    IL2CPP_REGISTER_METHOD(0x01740800, void, ctor, (app::DelegateSerializationHolder_DelegateEntry * this_ptr, app::Delegate * del, app::String * target_label))
    IL2CPP_REGISTER_METHOD(0x017409E0, app::Delegate *, DeserializeDelegate, (app::DelegateSerializationHolder_DelegateEntry * this_ptr, app::SerializationInfo * info, int32_t index))
}
