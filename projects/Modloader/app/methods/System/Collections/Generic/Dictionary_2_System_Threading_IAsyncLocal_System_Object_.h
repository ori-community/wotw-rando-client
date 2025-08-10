#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Threading_IAsyncLocal_System_Object_.h>
#include <Modloader/app/structs/IAsyncLocal.h>
#include <Modloader/app/structs/IDictionary_2_System_Threading_IAsyncLocal_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Threading_IAsyncLocal_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Threading_IAsyncLocal_System_Object_* this_ptr,
        app::IAsyncLocal* key,
        app::Object** value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, app::Dictionary_2_System_Threading_IAsyncLocal_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0283ADC0,
        void,
        ctor_2,
        app::Dictionary_2_System_Threading_IAsyncLocal_System_Object_* this_ptr,
        app::IDictionary_2_System_Threading_IAsyncLocal_System_Object_* dictionary
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Threading_IAsyncLocal_System_Object_* this_ptr,
        app::IAsyncLocal* key,
        app::Object* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Threading_IAsyncLocal_System_Object_
