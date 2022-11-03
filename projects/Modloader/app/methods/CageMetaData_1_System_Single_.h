#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CageMetaData_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x019DDBD0, void, OnEnable, (app::CageMetaData_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019DDCA0, void, OnDisable, (app::CageMetaData_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019DDD70, void, Add, (app::CageMetaData_1_System_Single_ * this_ptr, float data_entry, int32_t id))
    IL2CPP_REGISTER_METHOD(0x019DDF40, void, Remove, (app::CageMetaData_1_System_Single_ * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x019DE0D0, float, FindByID, (app::CageMetaData_1_System_Single_ * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x019DE1E0, void, ctor, (app::CageMetaData_1_System_Single_ * this_ptr))
} // namespace app::classes::CageMetaData_1_System_Single_
