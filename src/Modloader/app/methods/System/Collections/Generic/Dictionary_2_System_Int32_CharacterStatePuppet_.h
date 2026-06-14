#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterStatePuppet.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_CharacterStatePuppet_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_CharacterStatePuppet_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Int32_CharacterStatePuppet_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int32_CharacterStatePuppet_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::CharacterStatePuppet*, get_Item, app::Dictionary_2_System_Int32_CharacterStatePuppet_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_System_Int32_CharacterStatePuppet_* this_ptr, int32_t key, app::CharacterStatePuppet* value)
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet_*,
        get_Values,
        app::Dictionary_2_System_Int32_CharacterStatePuppet_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_CharacterStatePuppet_* this_ptr,
        int32_t key,
        app::CharacterStatePuppet** value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_CharacterStatePuppet_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_CharacterStatePuppet_
