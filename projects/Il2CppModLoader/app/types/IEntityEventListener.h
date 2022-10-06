#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEntityEventListener {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEntityEventListener__Class** type_info;
        inline app::IEntityEventListener__Class* get_class() {
            return il2cpp::get_class<app::IEntityEventListener__Class>(type_info, "Moon", "IEntityEventListener");
        }
        inline app::IEntityEventListener__Array* create_array(int size) {
            return il2cpp::array_new<app::IEntityEventListener__Array>(get_class(), size);
        }
        inline app::IEntityEventListener__Array* create_array(const std::vector<app::IEntityEventListener*>& items) {
            return il2cpp::array_new<app::IEntityEventListener__Array>(get_class(), items);
        }
    } // namespace IEntityEventListener
} // namespace app::classes::types
