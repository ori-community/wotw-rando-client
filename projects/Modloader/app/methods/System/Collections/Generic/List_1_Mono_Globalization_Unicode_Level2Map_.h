#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Mono_Globalization_Unicode_Level2Map_.h>
#include <Modloader/app/structs/Comparison_1_Mono_Globalization_Unicode_Level2Map_.h>
#include <Modloader/app/structs/Level2Map.h>
#include <Modloader/app/structs/Level2Map__Array.h>

namespace app::classes::System::Collections::Generic::List_1_Mono_Globalization_Unicode_Level2Map_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Mono_Globalization_Unicode_Level2Map_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Mono_Globalization_Unicode_Level2Map_ * this_ptr, app::Level2Map* item))
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_Mono_Globalization_Unicode_Level2Map_ * this_ptr, app::Comparison_1_Mono_Globalization_Unicode_Level2Map_* comparison))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Level2Map__Array*, ToArray, (app::List_1_Mono_Globalization_Unicode_Level2Map_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Mono_Globalization_Unicode_Level2Map_
