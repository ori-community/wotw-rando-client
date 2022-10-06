#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RespawningPlaceholder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RespawningPlaceholder__Class** type_info;
        inline app::RespawningPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::RespawningPlaceholder__Class>(type_info, "", "RespawningPlaceholder");
        }
        inline app::RespawningPlaceholder* create() {
            return il2cpp::create_object<app::RespawningPlaceholder>(get_class());
        }
        inline app::RespawningPlaceholder__Array* create_array(int size) {
            return il2cpp::array_new<app::RespawningPlaceholder__Array>(get_class(), size);
        }
        inline app::RespawningPlaceholder__Array* create_array(const std::vector<app::RespawningPlaceholder*>& items) {
            return il2cpp::array_new<app::RespawningPlaceholder__Array>(get_class(), items);
        }
    } // namespace RespawningPlaceholder
} // namespace app::classes::types
