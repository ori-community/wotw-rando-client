#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WotwUberStateToWwiseData_WotwUberStateToWWiseEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class** type_info;
        inline app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class>(type_info, "", "WotwUberStateToWwiseData", "WotwUberStateToWWiseEntry");
        }
        inline app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry* create() {
            return il2cpp::create_object<app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry>(get_class());
        }
        inline app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array>(get_class(), size);
        }
    } // namespace WotwUberStateToWwiseData_WotwUberStateToWWiseEntry
} // namespace app::classes::types
