#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_P3D_Node_.h>
#include <Modloader/app/structs/P3D_Node.h>

namespace app::classes::System::Collections::Generic::List_1_P3D_Node_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_P3D_Node_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::P3D_Node*, get_Item, app::List_1_P3D_Node_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_P3D_Node_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_P3D_Node_* this_ptr, app::P3D_Node* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_P3D_Node_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_P3D_Node_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_P3D_Node_
