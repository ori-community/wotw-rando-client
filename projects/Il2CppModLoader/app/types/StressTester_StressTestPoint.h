#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StressTester_StressTestPoint {
        namespace {
            app::StressTester_StressTestPoint__Class* type_info_ref = nullptr;
        }
        app::StressTester_StressTestPoint__Class** type_info = &type_info_ref;
        inline app::StressTester_StressTestPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_StressTestPoint__Class>(type_info, "", "StressTester", "StressTestPoint");
        }
        inline app::StressTester_StressTestPoint* create() {
            return il2cpp::create_object<app::StressTester_StressTestPoint>(get_class());
        }
        inline app::StressTester_StressTestPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::StressTester_StressTestPoint__Array>(get_class(), size);
        }
    } // namespace StressTester_StressTestPoint
} // namespace app::classes::types
