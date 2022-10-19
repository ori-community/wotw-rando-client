#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityKey_7 {
        inline app::EntityKey_7__Class** type_info = (app::EntityKey_7__Class**)(modloader::win::memory::resolve_rva(0x047853F0));
        inline app::EntityKey_7__Class* get_class() {
            return il2cpp::get_class<app::EntityKey_7__Class>(type_info, "PlayFab.ProfilesModels", "EntityKey");
        }
        inline app::EntityKey_7* create() {
            return il2cpp::create_object<app::EntityKey_7>(get_class());
        }
        inline app::EntityKey_7__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityKey_7__Array>(get_class(), size);
        }
        inline app::EntityKey_7__Array* create_array(const std::vector<app::EntityKey_7*>& items) {
            return il2cpp::array_new<app::EntityKey_7__Array>(get_class(), items);
        }
    } // namespace EntityKey_7
} // namespace app::classes::types
