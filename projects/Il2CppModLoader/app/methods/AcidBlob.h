#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AcidBlob {
    IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnPoolSpawned, (app::AcidBlob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::AcidBlob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_Active, (app::AcidBlob * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C15D0, void, set_Active, (app::AcidBlob * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004C15E0, void, OnCollisionEnter, (app::AcidBlob * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x004C1E80, void, ctor, (app::AcidBlob * this_ptr))
} // namespace app::classes::AcidBlob
