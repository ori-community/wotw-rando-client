#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Policy::Evidence {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Evidence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1BCF0, int32_t, get_Count, (app::Evidence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::Evidence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object *, get_SyncRoot, (app::Evidence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1BD50, void, CopyTo, (app::Evidence * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01E1BE10, app::IEnumerator *, GetEnumerator, (app::Evidence * this_ptr))
}
