#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SNetListenSocket_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SNetListenSocket_t__Class** type_info;
        inline app::SNetListenSocket_t__Class* get_class() {
            return il2cpp::get_class<app::SNetListenSocket_t__Class>(type_info, "Steamworks", "SNetListenSocket_t");
        }
        inline app::SNetListenSocket_t* create() {
            return il2cpp::create_object<app::SNetListenSocket_t>(get_class());
        }
        inline app::SNetListenSocket_t__Boxed* box(app::SNetListenSocket_t value) {
            return il2cpp::box_value<app::SNetListenSocket_t__Boxed>(get_class(), value);
        }
    } // namespace SNetListenSocket_t
} // namespace app::classes::types
