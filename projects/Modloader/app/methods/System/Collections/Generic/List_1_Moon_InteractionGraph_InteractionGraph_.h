#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_InteractionGraph_InteractionGraph_.h>
#include <Modloader/app/structs/InteractionGraph.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_InteractionGraph_InteractionGraph_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_InteractionGraph_InteractionGraph_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::InteractionGraph*, get_Item, (app::List_1_Moon_InteractionGraph_InteractionGraph_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_InteractionGraph_InteractionGraph_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_InteractionGraph_InteractionGraph_
