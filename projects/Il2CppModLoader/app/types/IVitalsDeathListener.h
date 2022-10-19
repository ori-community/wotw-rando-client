#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVitalsDeathListener {
        inline app::IVitalsDeathListener__Class** type_info = (app::IVitalsDeathListener__Class**)(modloader::win::memory::resolve_rva(0x04775A80));
        inline app::IVitalsDeathListener__Class* get_class() {
            return il2cpp::get_class<app::IVitalsDeathListener__Class>(type_info, "Moon", "IVitalsDeathListener");
        }
        inline app::IVitalsDeathListener__Array* create_array(int size) {
            return il2cpp::array_new<app::IVitalsDeathListener__Array>(get_class(), size);
        }
        inline app::IVitalsDeathListener__Array* create_array(const std::vector<app::IVitalsDeathListener*>& items) {
            return il2cpp::array_new<app::IVitalsDeathListener__Array>(get_class(), items);
        }
    } // namespace IVitalsDeathListener
} // namespace app::classes::types
