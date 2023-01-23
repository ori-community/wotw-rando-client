#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_ResolutionOptions_ResolutionEntry_.h>
#include <Modloader/app/structs/ResolutionOptions_ResolutionEntry.h>
#include <Modloader/app/structs/List_1_T_Enumerator_ResolutionOptions_ResolutionEntry_.h>
#include <Modloader/app/structs/Comparison_1_ResolutionOptions_ResolutionEntry_.h>

namespace app::classes::System::Collections::Generic::List_1_ResolutionOptions_ResolutionEntry_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ResolutionOptions_ResolutionEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731ED0, List_1_ResolutionOptions_ResolutionEntry___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ResolutionOptions_ResolutionEntry_ * this_ptr, app::ResolutionOptions_ResolutionEntry* item))
    IL2CPP_REGISTER_METHODINFO(0x0474C9B8, List_1_ResolutionOptions_ResolutionEntry__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_ResolutionOptions_ResolutionEntry_, GetEnumerator, (app::List_1_ResolutionOptions_ResolutionEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473ABE0, List_1_ResolutionOptions_ResolutionEntry__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_ResolutionOptions_ResolutionEntry_ * this_ptr, app::Comparison_1_ResolutionOptions_ResolutionEntry_* comparison))
    IL2CPP_REGISTER_METHODINFO(0x04745640, List_1_ResolutionOptions_ResolutionEntry__Sort__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_ResolutionOptions_ResolutionEntry_
