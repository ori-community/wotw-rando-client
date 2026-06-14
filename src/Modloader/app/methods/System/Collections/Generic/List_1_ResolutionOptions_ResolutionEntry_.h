#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_ResolutionOptions_ResolutionEntry_.h>
#include <Modloader/app/structs/List_1_ResolutionOptions_ResolutionEntry_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_ResolutionOptions_ResolutionEntry_.h>
#include <Modloader/app/structs/ResolutionOptions_ResolutionEntry.h>

namespace app::classes::System::Collections::Generic::List_1_ResolutionOptions_ResolutionEntry_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_ResolutionOptions_ResolutionEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_ResolutionOptions_ResolutionEntry_* this_ptr, app::ResolutionOptions_ResolutionEntry* item)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_ResolutionOptions_ResolutionEntry_,
        GetEnumerator,
        app::List_1_ResolutionOptions_ResolutionEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort,
        app::List_1_ResolutionOptions_ResolutionEntry_* this_ptr,
        app::Comparison_1_ResolutionOptions_ResolutionEntry_* comparison
    )
} // namespace app::classes::System::Collections::Generic::List_1_ResolutionOptions_ResolutionEntry_
