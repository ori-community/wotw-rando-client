#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Int32_PoolTransformPosition___Boxed.h>
#include <Modloader/app/structs/PoolTransformPosition.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_PoolTransformPosition_ {
    IL2CPP_REGISTER_METHOD(
        0x00150760,
        void,
        ctor,
        app::KeyValuePair_2_System_Int32_PoolTransformPosition___Boxed* this_ptr,
        int32_t key,
        app::PoolTransformPosition value
    )
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Key, app::KeyValuePair_2_System_Int32_PoolTransformPosition___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00150780, app::PoolTransformPosition, get_Value, app::KeyValuePair_2_System_Int32_PoolTransformPosition___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001507A0, app::String*, ToString, app::KeyValuePair_2_System_Int32_PoolTransformPosition___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32_PoolTransformPosition_
