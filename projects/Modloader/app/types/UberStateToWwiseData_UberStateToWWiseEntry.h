#pragma once
#include <Modloader/app/structs/UberStateToWwiseData_UberStateToWWiseEntry.h>
#include <Modloader/app/structs/UberStateToWwiseData_UberStateToWWiseEntry__Array.h>
#include <Modloader/app/structs/UberStateToWwiseData_UberStateToWWiseEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateToWwiseData_UberStateToWWiseEntry {
        inline app::UberStateToWwiseData_UberStateToWWiseEntry__Class** type_info() {
            static app::UberStateToWwiseData_UberStateToWWiseEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateToWwiseData_UberStateToWWiseEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateToWwiseData_UberStateToWWiseEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateToWwiseData_UberStateToWWiseEntry__Class>(type_info(), "Moon.Wwise", "UberStateToWwiseData", "UberStateToWWiseEntry");
        }
        inline app::UberStateToWwiseData_UberStateToWWiseEntry* create() {
            return il2cpp::create_object<app::UberStateToWwiseData_UberStateToWWiseEntry>(get_class());
        }
        inline app::UberStateToWwiseData_UberStateToWWiseEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateToWwiseData_UberStateToWWiseEntry__Array>(get_class(), size);
        }
        inline app::UberStateToWwiseData_UberStateToWWiseEntry__Array* create_array(const std::vector<app::UberStateToWwiseData_UberStateToWWiseEntry*>& items) {
            return il2cpp::array_new<app::UberStateToWwiseData_UberStateToWWiseEntry__Array>(get_class(), items);
        }
    } // namespace UberStateToWwiseData_UberStateToWWiseEntry
} // namespace app::classes::types
