#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlockingCollectionDebugView_1_System_Object_.h>
#include <Modloader/app/structs/BlockingCollection_1_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::Concurrent::BlockingCollectionDebugView_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0243AC00, app::Object__Array*, get_Items, app::BlockingCollectionDebugView_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AD7D20,
        void,
        ctor,
        app::BlockingCollectionDebugView_1_System_Object_* this_ptr,
        app::BlockingCollection_1_System_Object_* collection
    )
} // namespace app::classes::System::Collections::Concurrent::BlockingCollectionDebugView_1_System_Object_
