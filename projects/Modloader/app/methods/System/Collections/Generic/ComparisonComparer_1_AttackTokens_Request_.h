#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttackTokens_Request.h>
#include <Modloader/app/structs/ComparisonComparer_1_AttackTokens_Request_.h>
#include <Modloader/app/structs/Comparison_1_AttackTokens_Request_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_AttackTokens_Request_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_AttackTokens_Request_* this_ptr,
        app::Comparison_1_AttackTokens_Request_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A0E0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_AttackTokens_Request_* this_ptr,
        app::AttackTokens_Request x,
        app::AttackTokens_Request y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_AttackTokens_Request_
