#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/Comparison_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_SeinSpiritSpearSpell_FlyingSpear_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_SeinSpiritSpearSpell_FlyingSpear_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02824D00, app::Comparer_1_SeinSpiritSpearSpell_FlyingSpear_*, Create, (app::Comparison_1_SeinSpiritSpearSpell_FlyingSpear_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0477CA20, Comparer_1_SeinSpiritSpearSpell_FlyingSpear__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02824F00, app::Comparer_1_SeinSpiritSpearSpell_FlyingSpear_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02810770, int32_t, IComparer_Compare, (app::Comparer_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_SeinSpiritSpearSpell_FlyingSpear_
