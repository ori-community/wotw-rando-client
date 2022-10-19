#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IList {
        inline app::IList__Class** type_info = (app::IList__Class**)(modloader::win::memory::resolve_rva(0x0471FB08));
        inline app::IList__Class* get_class() {
            return il2cpp::get_class<app::IList__Class>(type_info, "System.Collections", "IList");
        }
        inline app::IList__Array* create_array(int size) {
            return il2cpp::array_new<app::IList__Array>(get_class(), size);
        }
        inline app::IList__Array* create_array(const std::vector<app::IList*>& items) {
            return il2cpp::array_new<app::IList__Array>(get_class(), items);
        }
    } // namespace IList
} // namespace app::classes::types
