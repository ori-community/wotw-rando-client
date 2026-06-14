#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_WotwUberStateToWwiseData_AbilityRequirementCondition_.h>
#include <Modloader/app/structs/WotwUberStateToWwiseData_AbilityRequirementCondition.h>
#include <Modloader/app/structs/WotwUberStateToWwiseData_AbilityRequirementCondition__Array.h>

namespace app::classes::System::Collections::Generic::List_1_WotwUberStateToWwiseData_AbilityRequirementCondition_ {
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_WotwUberStateToWwiseData_AbilityRequirementCondition_* this_ptr,
        app::WotwUberStateToWwiseData_AbilityRequirementCondition* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEF0,
        app::WotwUberStateToWwiseData_AbilityRequirementCondition__Array*,
        ToArray,
        app::List_1_WotwUberStateToWwiseData_AbilityRequirementCondition_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::List_1_WotwUberStateToWwiseData_AbilityRequirementCondition_
