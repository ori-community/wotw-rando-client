#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IProducerConsumerCollectionDebugView_1_System_Object_.h>
#include <Modloader/app/structs/IProducerConsumerCollection_1_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::Concurrent::IProducerConsumerCollectionDebugView_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02F29160, app::Object__Array*, get_Items, app::IProducerConsumerCollectionDebugView_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F29090,
        void,
        ctor,
        app::IProducerConsumerCollectionDebugView_1_System_Object_* this_ptr,
        app::IProducerConsumerCollection_1_System_Object_* collection
    )
} // namespace app::classes::System::Collections::Concurrent::IProducerConsumerCollectionDebugView_1_System_Object_
