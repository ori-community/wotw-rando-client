#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValueTuple_4_String_Int32_Int32_Single___Boxed.h>

namespace app::classes::System::ValueTuple_4_String_Int32_Int32_Single_ {
    IL2CPP_REGISTER_METHOD(
        0x0021EE00,
        void,
        ctor,
        app::ValueTuple_4_String_Int32_Int32_Single___Boxed* this_ptr,
        app::String* item1,
        int32_t item2,
        int32_t item3,
        float item4
    )
}
