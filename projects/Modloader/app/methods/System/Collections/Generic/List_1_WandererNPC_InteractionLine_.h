#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WandererNPC_InteractionLine.h>
#include <Modloader/app/structs/List_1_WandererNPC_InteractionLine_.h>

namespace app::classes::System::Collections::Generic::List_1_WandererNPC_InteractionLine_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::WandererNPC_InteractionLine*, get_Item, (app::List_1_WandererNPC_InteractionLine_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04727E28, List_1_WandererNPC_InteractionLine__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_WandererNPC_InteractionLine_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470EEC0, List_1_WandererNPC_InteractionLine__get_Count__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_WandererNPC_InteractionLine_
