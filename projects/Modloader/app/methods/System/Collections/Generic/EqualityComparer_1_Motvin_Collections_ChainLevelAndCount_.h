#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_Motvin_Collections_ChainLevelAndCount_.h>
#include <Modloader/app/structs/ChainLevelAndCount.h>
#include <Modloader/app/structs/ChainLevelAndCount__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_Motvin_Collections_ChainLevelAndCount_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_Motvin_Collections_ChainLevelAndCount_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02D41010, app::EqualityComparer_1_Motvin_Collections_ChainLevelAndCount_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B48030, int32_t, IndexOf, (app::EqualityComparer_1_Motvin_Collections_ChainLevelAndCount_ * this_ptr, app::ChainLevelAndCount__Array* array, app::ChainLevelAndCount value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B480E0, int32_t, LastIndexOf, (app::EqualityComparer_1_Motvin_Collections_ChainLevelAndCount_ * this_ptr, app::ChainLevelAndCount__Array* array, app::ChainLevelAndCount value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B48190, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_Motvin_Collections_ChainLevelAndCount_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B48280, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_Motvin_Collections_ChainLevelAndCount_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_Motvin_Collections_ChainLevelAndCount_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_Motvin_Collections_ChainLevelAndCount_
