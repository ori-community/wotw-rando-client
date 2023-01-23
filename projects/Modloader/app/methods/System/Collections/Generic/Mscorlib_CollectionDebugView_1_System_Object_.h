#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Mscorlib_CollectionDebugView_1_System_Object_.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>

namespace app::classes::System::Collections::Generic::Mscorlib_CollectionDebugView_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0162AB30, app::Object__Array*, get_Items, (app::Mscorlib_CollectionDebugView_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B82A70, void, ctor, (app::Mscorlib_CollectionDebugView_1_System_Object_ * this_ptr, app::ICollection_1_System_Object_* collection))
} // namespace app::classes::System::Collections::Generic::Mscorlib_CollectionDebugView_1_System_Object_
