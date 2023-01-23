#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExpandoObject_KeyCollectionDebugView.h>
#include <Modloader/app/structs/ICollection_1_System_String_.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Dynamic::ExpandoObject_KeyCollectionDebugView {
    IL2CPP_REGISTER_METHOD(0x01F90890, void, ctor, (app::ExpandoObject_KeyCollectionDebugView * this_ptr, app::ICollection_1_System_String_* collection))
    IL2CPP_REGISTER_METHOD(0x01F90930, app::String__Array*, get_Items, (app::ExpandoObject_KeyCollectionDebugView * this_ptr))
} // namespace app::classes::System::Dynamic::ExpandoObject_KeyCollectionDebugView
