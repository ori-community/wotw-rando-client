#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array {
        inline app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__Class** type_info = (app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x047698D8));
        inline app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__Class>(type_info, "", "WotwUberStateToWwiseData+WotwUberStateToWWiseEntry[]");
        }
        inline app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array* create() {
            return il2cpp::create_object<app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array>(get_class());
        }
    } // namespace WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array
} // namespace app::classes::types
