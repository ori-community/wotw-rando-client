#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_SeinSpiritSpearSpell_FlyingSpear_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_SeinSpiritSpearSpell_FlyingSpear_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02D93750, app::EqualityComparer_1_SeinSpiritSpearSpell_FlyingSpear_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02CE08C0, int32_t, IndexOf, (app::EqualityComparer_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear__Array* array, app::SeinSpiritSpearSpell_FlyingSpear value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02CE09F0, int32_t, LastIndexOf, (app::EqualityComparer_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::SeinSpiritSpearSpell_FlyingSpear__Array* array, app::SeinSpiritSpearSpell_FlyingSpear value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02CE0B20, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02CE0C40, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_SeinSpiritSpearSpell_FlyingSpear_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_SeinSpiritSpearSpell_FlyingSpear_
