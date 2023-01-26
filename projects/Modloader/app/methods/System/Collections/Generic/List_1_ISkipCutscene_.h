#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_ISkipCutscene_.h>
#include <Modloader/app/structs/ISkipCutscene.h>

namespace app::classes::System::Collections::Generic::List_1_ISkipCutscene_ {
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_ISkipCutscene_ * this_ptr, app::ISkipCutscene* item))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ISkipCutscene_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ISkipCutscene*, get_Item, (app::List_1_ISkipCutscene_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_ISkipCutscene_ * this_ptr, int32_t index, app::ISkipCutscene* item))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ISkipCutscene_ * this_ptr, app::ISkipCutscene* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_ISkipCutscene_ * this_ptr, app::ISkipCutscene* item))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_ISkipCutscene_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ISkipCutscene_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_ISkipCutscene_
