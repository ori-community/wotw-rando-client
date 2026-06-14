#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Newtonsoft_Json_JsonPosition_.h>
#include <Modloader/app/structs/Comparison_1_Newtonsoft_Json_JsonPosition_.h>
#include <Modloader/app/structs/JsonPosition.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Newtonsoft_Json_JsonPosition_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_Newtonsoft_Json_JsonPosition_* this_ptr,
        app::Comparison_1_Newtonsoft_Json_JsonPosition_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A0E0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_Newtonsoft_Json_JsonPosition_* this_ptr,
        app::JsonPosition x,
        app::JsonPosition y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Newtonsoft_Json_JsonPosition_
