#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_SetupStateModifier_.h>
#include <Modloader/app/structs/SetupStateModifier.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_SetupStateModifier_ {
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_System_Int32_SetupStateModifier_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_SetupStateModifier_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_System_Int32_SetupStateModifier_* this_ptr, int32_t key, app::SetupStateModifier* value)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int32_SetupStateModifier_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::SetupStateModifier*, get_Item, app::Dictionary_2_System_Int32_SetupStateModifier_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Int32_SetupStateModifier_* this_ptr,
        int32_t key,
        app::SetupStateModifier* value
    )
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, app::Dictionary_2_System_Int32_SetupStateModifier_* this_ptr, int32_t key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_SetupStateModifier_
