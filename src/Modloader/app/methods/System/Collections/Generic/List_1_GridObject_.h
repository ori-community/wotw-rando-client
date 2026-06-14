#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GridObject.h>
#include <Modloader/app/structs/List_1_GridObject_.h>

namespace app::classes::System::Collections::Generic::List_1_GridObject_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_GridObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::GridObject*, get_Item, app::List_1_GridObject_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, app::List_1_GridObject_* this_ptr, app::GridObject* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_GridObject_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_GridObject_
