#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_SpiritShardIconsCollection_Icons_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_SpiritShardIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_SpiritShardIconsCollection_Icons_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02D98250, app::EqualityComparer_1_SpiritShardIconsCollection_Icons_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B5B200,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_SpiritShardIconsCollection_Icons_* this_ptr,
        app::SpiritShardIconsCollection_Icons__Array* array,
        app::SpiritShardIconsCollection_Icons value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B5B2F0,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_SpiritShardIconsCollection_Icons_* this_ptr,
        app::SpiritShardIconsCollection_Icons__Array* array,
        app::SpiritShardIconsCollection_Icons value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B5B3E0,
        int32_t,
        IEqualityComparer_GetHashCode,
        app::EqualityComparer_1_SpiritShardIconsCollection_Icons_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B5B4E0,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_SpiritShardIconsCollection_Icons_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_SpiritShardIconsCollection_Icons_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_SpiritShardIconsCollection_Icons_
