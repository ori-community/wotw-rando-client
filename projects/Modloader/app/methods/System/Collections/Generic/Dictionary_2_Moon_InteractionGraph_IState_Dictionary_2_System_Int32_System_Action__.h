#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Action_.h>
#include <Modloader/app/structs/IState_1.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action__ {
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action_* this_ptr,
        app::IState_1* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action_* this_ptr,
        app::IState_1* key,
        app::Dictionary_2_System_Int32_System_Action_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BD24D0,
        app::Dictionary_2_System_Int32_System_Action_*,
        get_Item,
        app::Dictionary_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action_* this_ptr,
        app::IState_1* key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action__
