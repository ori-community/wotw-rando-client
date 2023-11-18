#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandoObject_ValueCollectionDebugView.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Dynamic::ExpandoObject_ValueCollectionDebugView {
    IL2CPP_REGISTER_METHOD(0x01F935F0, void, ctor, (app::ExpandoObject_ValueCollectionDebugView * this_ptr, app::ICollection_1_System_Object_* collection))
    IL2CPP_REGISTER_METHOD(0x01F93690, app::Object__Array*, get_Items, (app::ExpandoObject_ValueCollectionDebugView * this_ptr))
} // namespace app::classes::System::Dynamic::ExpandoObject_ValueCollectionDebugView
