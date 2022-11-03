#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StressTester_StressTestPoint__Array {
        namespace {
            inline app::StressTester_StressTestPoint__Array__Class* type_info_ref = nullptr;
        }
        inline app::StressTester_StressTestPoint__Array__Class** type_info = &type_info_ref;
        inline app::StressTester_StressTestPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::StressTester_StressTestPoint__Array__Class>(type_info, "", "StressTester+StressTestPoint[]");
        }
        inline app::StressTester_StressTestPoint__Array* create() {
            return il2cpp::create_object<app::StressTester_StressTestPoint__Array>(get_class());
        }
    } // namespace StressTester_StressTestPoint__Array
} // namespace app::classes::types
