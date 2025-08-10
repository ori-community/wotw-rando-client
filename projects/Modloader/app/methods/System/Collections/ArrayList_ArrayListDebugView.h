#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ArrayList_ArrayListDebugView.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::ArrayList_ArrayListDebugView {
    IL2CPP_REGISTER_METHOD(0x0201A220, void, ctor, app::ArrayList_ArrayListDebugView* this_ptr, app::ArrayList* array_list)
    IL2CPP_REGISTER_METHOD(0x0201A2E0, app::Object__Array*, get_Items, app::ArrayList_ArrayListDebugView* this_ptr)
} // namespace app::classes::System::Collections::ArrayList_ArrayListDebugView
