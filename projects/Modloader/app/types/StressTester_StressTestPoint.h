#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StressTester_StressTestPoint {
        namespace {
            inline app::StressTester_StressTestPoint__Class* type_info_ref = nullptr;
        }
        inline app::StressTester_StressTestPoint__Class** type_info = &type_info_ref;
        inline app::StressTester_StressTestPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_StressTestPoint__Class>(type_info, "", "StressTester", "StressTestPoint");
        }
        inline app::StressTester_StressTestPoint* create() {
            return il2cpp::create_object<app::StressTester_StressTestPoint>(get_class());
        }
        inline app::StressTester_StressTestPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::StressTester_StressTestPoint__Array>(get_class(), size);
        }
        inline app::StressTester_StressTestPoint__Array* create_array(const std::vector<app::StressTester_StressTestPoint*>& items) {
            return il2cpp::array_new<app::StressTester_StressTestPoint__Array>(get_class(), items);
        }
    } // namespace StressTester_StressTestPoint
} // namespace app::classes::types
