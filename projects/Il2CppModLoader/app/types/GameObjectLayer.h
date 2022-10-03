#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObjectLayer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameObjectLayer__Class** type_info;
        inline app::GameObjectLayer__Class* get_class() {
            return il2cpp::get_class<app::GameObjectLayer__Class>(type_info, "", "GameObjectLayer");
        }
        inline app::GameObjectLayer* create() {
            return il2cpp::create_object<app::GameObjectLayer>(get_class());
        }
    } // namespace GameObjectLayer
} // namespace app::classes::types
