#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEnumerator__Class** type_info;
        inline app::IEnumerator__Class* get_class() {
            return il2cpp::get_class<app::IEnumerator__Class>(type_info, "System.Collections", "IEnumerator");
        }
        inline app::IEnumerator__Array* create_array(int size) {
            return il2cpp::array_new<app::IEnumerator__Array>(get_class(), size);
        }
        inline app::IEnumerator__Array* create_array(const std::vector<app::IEnumerator*>& items) {
            return il2cpp::array_new<app::IEnumerator__Array>(get_class(), items);
        }
    } // namespace IEnumerator
} // namespace app::classes::types
