#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEnumerator {
        inline app::IEnumerator__Class** type_info = (app::IEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04719F60));
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
