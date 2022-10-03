#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace gameserveritem_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::gameserveritem_t__Class** type_info;
        inline app::gameserveritem_t__Class* get_class() {
            return il2cpp::get_class<app::gameserveritem_t__Class>(type_info, "Steamworks", "gameserveritem_t");
        }
        inline app::gameserveritem_t* create() {
            return il2cpp::create_object<app::gameserveritem_t>(get_class());
        }
    } // namespace gameserveritem_t
} // namespace app::classes::types
