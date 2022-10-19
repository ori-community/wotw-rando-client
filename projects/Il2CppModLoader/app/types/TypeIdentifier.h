#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeIdentifier {
        inline app::TypeIdentifier__Class** type_info = (app::TypeIdentifier__Class**)(modloader::win::memory::resolve_rva(0x0474A6A0));
        inline app::TypeIdentifier__Class* get_class() {
            return il2cpp::get_class<app::TypeIdentifier__Class>(type_info, "System", "TypeIdentifier");
        }
        inline app::TypeIdentifier__Array* create_array(int size) {
            return il2cpp::array_new<app::TypeIdentifier__Array>(get_class(), size);
        }
        inline app::TypeIdentifier__Array* create_array(const std::vector<app::TypeIdentifier*>& items) {
            return il2cpp::array_new<app::TypeIdentifier__Array>(get_class(), items);
        }
    } // namespace TypeIdentifier
} // namespace app::classes::types
