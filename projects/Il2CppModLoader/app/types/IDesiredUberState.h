#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDesiredUberState {
        inline app::IDesiredUberState__Class** type_info = (app::IDesiredUberState__Class**)(modloader::win::memory::resolve_rva(0x0472B058));
        inline app::IDesiredUberState__Class* get_class() {
            return il2cpp::get_class<app::IDesiredUberState__Class>(type_info, "", "IDesiredUberState");
        }
        inline app::IDesiredUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::IDesiredUberState__Array>(get_class(), size);
        }
        inline app::IDesiredUberState__Array* create_array(const std::vector<app::IDesiredUberState*>& items) {
            return il2cpp::array_new<app::IDesiredUberState__Array>(get_class(), items);
        }
    } // namespace IDesiredUberState
} // namespace app::classes::types
