#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Mono_Globalization_Unicode_Contraction_.h>
#include <Modloader/app/structs/Contraction.h>
#include <Modloader/app/structs/Contraction__Array.h>
#include <Modloader/app/structs/IComparer_1_Mono_Globalization_Unicode_Contraction_.h>

namespace app::classes::System::Collections::Generic::List_1_Mono_Globalization_Unicode_Contraction_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Mono_Globalization_Unicode_Contraction_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Mono_Globalization_Unicode_Contraction_ * this_ptr, app::Contraction* item))
    IL2CPP_REGISTER_METHOD(0x025EADB0, void, Sort, (app::List_1_Mono_Globalization_Unicode_Contraction_ * this_ptr, app::IComparer_1_Mono_Globalization_Unicode_Contraction_* comparer))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Contraction__Array*, ToArray, (app::List_1_Mono_Globalization_Unicode_Contraction_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Mono_Globalization_Unicode_Contraction_
