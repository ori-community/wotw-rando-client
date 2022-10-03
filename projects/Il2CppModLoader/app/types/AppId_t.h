#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AppId_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AppId_t__Class** type_info;
        inline app::AppId_t__Class* get_class() {
            return il2cpp::get_class<app::AppId_t__Class>(type_info, "Steamworks", "AppId_t");
        }
        inline app::AppId_t* create() {
            return il2cpp::create_object<app::AppId_t>(get_class());
        }
        inline app::AppId_t__Boxed* box(app::AppId_t value) {
            return il2cpp::box_value<app::AppId_t__Boxed>(get_class(), value);
        }
        inline app::AppId_t__Array* create_array(int size) {
            return il2cpp::array_new<app::AppId_t__Array>(get_class(), size);
        }
    } // namespace AppId_t
} // namespace app::classes::types
