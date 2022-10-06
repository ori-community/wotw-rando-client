#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUberState__Class** type_info;
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
