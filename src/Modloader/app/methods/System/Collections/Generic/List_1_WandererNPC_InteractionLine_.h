#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_WandererNPC_InteractionLine_.h>
#include <Modloader/app/structs/WandererNPC_InteractionLine.h>

namespace app::classes::System::Collections::Generic::List_1_WandererNPC_InteractionLine_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::WandererNPC_InteractionLine*, get_Item, app::List_1_WandererNPC_InteractionLine_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_WandererNPC_InteractionLine_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_WandererNPC_InteractionLine_
