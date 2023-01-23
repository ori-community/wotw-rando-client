#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class.h>
#include <Modloader/app/structs/WotwUberStateToWwiseData_WotwUberStateToWWiseEntry.h>
#include <Modloader/app/structs/WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array.h>

namespace app::classes::types {
    namespace WotwUberStateToWwiseData_WotwUberStateToWWiseEntry {
        inline app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class** type_info = (app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class**)(modloader::win::memory::resolve_rva(0x04750B60));
        inline app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class>(type_info, "", "WotwUberStateToWwiseData", "WotwUberStateToWWiseEntry");
        }
        inline app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry* create() {
            return il2cpp::create_object<app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry>(get_class());
        }
        inline app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array>(get_class(), size);
        }
        inline app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array* create_array(const std::vector<app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry*>& items) {
            return il2cpp::array_new<app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array>(get_class(), items);
        }
    } // namespace WotwUberStateToWwiseData_WotwUberStateToWWiseEntry
} // namespace app::classes::types
