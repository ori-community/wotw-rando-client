#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_List_1_System_WeakReference_.h>
#include <Modloader/app/structs/List_1_System_WeakReference_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_List_1_System_WeakReference__ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_List_1_System_WeakReference_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_List_1_System_WeakReference_* this_ptr,
        int32_t key,
        app::List_1_System_WeakReference_** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Int32_List_1_System_WeakReference_* this_ptr,
        int32_t key,
        app::List_1_System_WeakReference_* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_List_1_System_WeakReference__
