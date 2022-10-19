#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberState {
        inline app::IUberState__Class** type_info = (app::IUberState__Class**)(modloader::win::memory::resolve_rva(0x04725708));
        inline app::IUberState__Class* get_class() {
            return il2cpp::get_class<app::IUberState__Class>(type_info, "Moon", "IUberState");
        }
        inline app::IUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::IUberState__Array>(get_class(), size);
        }
        inline app::IUberState__Array* create_array(const std::vector<app::IUberState*>& items) {
            return il2cpp::array_new<app::IUberState__Array>(get_class(), items);
        }
    } // namespace IUberState
} // namespace app::classes::types
