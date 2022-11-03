#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MainThreadWorkStealer_TimeBudgetMode__Enum {
        namespace {
            inline app::MainThreadWorkStealer_TimeBudgetMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MainThreadWorkStealer_TimeBudgetMode__Enum__Class** type_info = &type_info_ref;
        inline app::MainThreadWorkStealer_TimeBudgetMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MainThreadWorkStealer_TimeBudgetMode__Enum__Class>(type_info, "usedStandaloneScripts", "MainThreadWorkStealer", "TimeBudgetMode");
        }
        inline app::MainThreadWorkStealer_TimeBudgetMode__Enum* create() {
            return il2cpp::create_object<app::MainThreadWorkStealer_TimeBudgetMode__Enum>(get_class());
        }
        inline app::MainThreadWorkStealer_TimeBudgetMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MainThreadWorkStealer_TimeBudgetMode__Enum__Array>(get_class(), size);
        }
        inline app::MainThreadWorkStealer_TimeBudgetMode__Enum__Array* create_array(const std::vector<app::MainThreadWorkStealer_TimeBudgetMode__Enum*>& items) {
            return il2cpp::array_new<app::MainThreadWorkStealer_TimeBudgetMode__Enum__Array>(get_class(), items);
        }
    } // namespace MainThreadWorkStealer_TimeBudgetMode__Enum
} // namespace app::classes::types
