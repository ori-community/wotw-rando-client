#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_InstantiateUtility_InstantiationInfo_.h>
#include <Modloader/app/structs/Comparison_1_InstantiateUtility_InstantiationInfo_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_InstantiateUtility_InstantiationInfo_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_InstantiateUtility_InstantiationInfo_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x02C9FD90,
        app::Comparer_1_InstantiateUtility_InstantiationInfo_*,
        Create,
        app::Comparison_1_InstantiateUtility_InstantiationInfo_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x02C9FF90, app::Comparer_1_InstantiateUtility_InstantiationInfo_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x0280A070,
        int32_t,
        IComparer_Compare,
        app::Comparer_1_InstantiateUtility_InstantiationInfo_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_InstantiateUtility_InstantiationInfo_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_InstantiateUtility_InstantiationInfo_
