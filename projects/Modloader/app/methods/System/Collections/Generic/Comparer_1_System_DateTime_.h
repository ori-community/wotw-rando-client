#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_System_DateTime_.h>
#include <Modloader/app/structs/Comparison_1_DateTime_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_DateTime_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x028BCE40, app::Comparer_1_System_DateTime_*, Create, app::Comparison_1_DateTime_* comparison)
    IL2CPP_REGISTER_METHOD(0x028BD040, app::Comparer_1_System_DateTime_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(0x02813410, int32_t, IComparer_Compare, app::Comparer_1_System_DateTime_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_System_DateTime_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_DateTime_
