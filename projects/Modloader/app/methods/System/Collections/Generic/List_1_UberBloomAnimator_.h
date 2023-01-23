#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UberBloomAnimator_.h>
#include <Modloader/app/structs/UberBloomAnimator.h>

namespace app::classes::System::Collections::Generic::List_1_UberBloomAnimator_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UberBloomAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474F9C0, List_1_UberBloomAnimator__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_UberBloomAnimator_ * this_ptr, app::UberBloomAnimator* item))
    IL2CPP_REGISTER_METHODINFO(0x04749998, List_1_UberBloomAnimator__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_UberBloomAnimator_ * this_ptr, app::UberBloomAnimator* item))
    IL2CPP_REGISTER_METHODINFO(0x0474AD60, List_1_UberBloomAnimator__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_UberBloomAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706DB8, List_1_UberBloomAnimator___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::UberBloomAnimator*, get_Item, (app::List_1_UberBloomAnimator_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04785BB8, List_1_UberBloomAnimator__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_UberBloomAnimator_
