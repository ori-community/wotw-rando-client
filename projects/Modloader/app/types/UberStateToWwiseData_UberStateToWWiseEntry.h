#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateToWwiseData_UberStateToWWiseEntry {
        namespace {
            inline app::UberStateToWwiseData_UberStateToWWiseEntry__Class* type_info_ref = nullptr;
        }
        inline app::UberStateToWwiseData_UberStateToWWiseEntry__Class** type_info = &type_info_ref;
        inline app::UberStateToWwiseData_UberStateToWWiseEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateToWwiseData_UberStateToWWiseEntry__Class>(type_info, "Moon.Wwise", "UberStateToWwiseData", "UberStateToWWiseEntry");
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
