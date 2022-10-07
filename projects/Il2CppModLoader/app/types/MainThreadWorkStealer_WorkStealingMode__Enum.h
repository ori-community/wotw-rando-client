#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MainThreadWorkStealer_WorkStealingMode__Enum {
        namespace {
            app::MainThreadWorkStealer_WorkStealingMode__Enum__Class* type_info_ref = nullptr;
        }
        app::MainThreadWorkStealer_WorkStealingMode__Enum__Class** type_info = &type_info_ref;
        inline app::MainThreadWorkStealer_WorkStealingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MainThreadWorkStealer_WorkStealingMode__Enum__Class>(type_info, "usedStandaloneScripts", "MainThreadWorkStealer", "WorkStealingMode");
        }
        inline app::MainThreadWorkStealer_WorkStealingMode__Enum* create() {
            return il2cpp::create_object<app::MainThreadWorkStealer_WorkStealingMode__Enum>(get_class());
        }
        inline app::MainThreadWorkStealer_WorkStealingMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MainThreadWorkStealer_WorkStealingMode__Enum__Array>(get_class(), size);
        }
        inline app::MainThreadWorkStealer_WorkStealingMode__Enum__Array* create_array(const std::vector<app::MainThreadWorkStealer_WorkStealingMode__Enum*>& items) {
            return il2cpp::array_new<app::MainThreadWorkStealer_WorkStealingMode__Enum__Array>(get_class(), items);
        }
    } // namespace MainThreadWorkStealer_WorkStealingMode__Enum
} // namespace app::classes::types
