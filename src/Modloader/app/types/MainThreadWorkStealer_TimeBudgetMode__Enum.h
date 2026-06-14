#pragma once
#include <Modloader/app/structs/MainThreadWorkStealer_TimeBudgetMode__Enum.h>
#include <Modloader/app/structs/MainThreadWorkStealer_TimeBudgetMode__Enum__Array.h>
#include <Modloader/app/structs/MainThreadWorkStealer_TimeBudgetMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MainThreadWorkStealer_TimeBudgetMode__Enum {
        inline app::MainThreadWorkStealer_TimeBudgetMode__Enum__Class** type_info() {
            static app::MainThreadWorkStealer_TimeBudgetMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MainThreadWorkStealer_TimeBudgetMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MainThreadWorkStealer_TimeBudgetMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MainThreadWorkStealer_TimeBudgetMode__Enum__Class>(type_info(), "usedStandaloneScripts", "MainThreadWorkStealer", "TimeBudgetMode");
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
