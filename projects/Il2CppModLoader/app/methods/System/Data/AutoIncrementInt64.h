#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::AutoIncrementInt64 {
    IL2CPP_REGISTER_METHOD(0x02149EB0, app::Object*, get_Current, (app::AutoIncrementInt64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02149F40, void, set_Current, (app::AutoIncrementInt64 * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02149FF0, app::Type*, get_DataType, (app::AutoIncrementInt64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_Seed, (app::AutoIncrementInt64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0214A090, void, set_Seed, (app::AutoIncrementInt64 * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_Step, (app::AutoIncrementInt64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0214A180, void, set_Step, (app::AutoIncrementInt64 * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x04762118, AutoIncrementInt64_set_Step__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0214A260, void, MoveAfter, (app::AutoIncrementInt64 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0214A270, void, SetCurrent, (app::AutoIncrementInt64 * this_ptr, app::Object* value, app::IFormatProvider* format_provider))
    IL2CPP_REGISTER_METHOD(0x0214A330, void, SetCurrentAndIncrement, (app::AutoIncrementInt64 * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0214A4D0, bool, BoundaryCheck, (app::AutoIncrementInt64 * this_ptr, app::BigInteger_2 value))
    IL2CPP_REGISTER_METHOD(0x0214A600, void, ctor, (app::AutoIncrementInt64 * this_ptr))
} // namespace app::classes::System::Data::AutoIncrementInt64
