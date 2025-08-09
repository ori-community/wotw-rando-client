#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_ThreadPriority_System_Double_.h>
#include <Modloader/app/structs/ThreadPriority__Enum_1.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_ThreadPriority_System_Double_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBBD40,
        void,
        set_Item,
        app::Dictionary_2_UnityEngine_ThreadPriority_System_Double_* this_ptr,
        app::ThreadPriority__Enum_1 key,
        double value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBBD70,
        void,
        Add,
        app::Dictionary_2_UnityEngine_ThreadPriority_System_Double_* this_ptr,
        app::ThreadPriority__Enum_1 key,
        double value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_ThreadPriority_System_Double_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_ThreadPriority_System_Double_
