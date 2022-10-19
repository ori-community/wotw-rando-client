#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityTargetting {
        inline app::EntityTargetting__Class** type_info = (app::EntityTargetting__Class**)(modloader::win::memory::resolve_rva(0x04769B00));
        inline app::EntityTargetting__Class* get_class() {
            return il2cpp::get_class<app::EntityTargetting__Class>(type_info, "", "EntityTargetting");
        }
        inline app::EntityTargetting* create() {
            return il2cpp::create_object<app::EntityTargetting>(get_class());
        }
        inline app::EntityTargetting__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityTargetting__Array>(get_class(), size);
        }
        inline app::EntityTargetting__Array* create_array(const std::vector<app::EntityTargetting*>& items) {
            return il2cpp::array_new<app::EntityTargetting__Array>(get_class(), items);
        }
    } // namespace EntityTargetting
} // namespace app::classes::types
