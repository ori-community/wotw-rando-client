#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace servernetadr_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::servernetadr_t__Class** type_info;
        inline app::servernetadr_t__Class* get_class() {
            return il2cpp::get_class<app::servernetadr_t__Class>(type_info, "Steamworks", "servernetadr_t");
        }
        inline app::servernetadr_t* create() {
            return il2cpp::create_object<app::servernetadr_t>(get_class());
        }
        inline app::servernetadr_t__Boxed* box(app::servernetadr_t value) {
            return il2cpp::box_value<app::servernetadr_t__Boxed>(get_class(), value);
        }
    } // namespace servernetadr_t
} // namespace app::classes::types
