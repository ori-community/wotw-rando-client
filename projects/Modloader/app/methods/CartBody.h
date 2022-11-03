#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CartBody {
    IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_AddtiveRotation, (app::CartBody * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00B32900, float, get_BodyNormalizedLocalRotation, (app::CartBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B32910, void, Awake, (app::CartBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B32A00, void, OnEnable, (app::CartBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B32B40, void, Update, (app::CartBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B32B60, void, UpdateRotation, (app::CartBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B32CF0, void, ApplyRotation, (app::CartBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (app::CartBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B33000, void, ctor, (app::CartBody * this_ptr))
} // namespace app::classes::CartBody
