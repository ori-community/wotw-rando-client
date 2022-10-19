#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityPlaceholder {
        inline app::EntityPlaceholder__Class** type_info = (app::EntityPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x04744718));
        inline app::EntityPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::EntityPlaceholder__Class>(type_info, "", "EntityPlaceholder");
        }
        inline app::EntityPlaceholder* create() {
            return il2cpp::create_object<app::EntityPlaceholder>(get_class());
        }
        inline app::EntityPlaceholder__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityPlaceholder__Array>(get_class(), size);
        }
        inline app::EntityPlaceholder__Array* create_array(const std::vector<app::EntityPlaceholder*>& items) {
            return il2cpp::array_new<app::EntityPlaceholder__Array>(get_class(), items);
        }
    } // namespace EntityPlaceholder
} // namespace app::classes::types
