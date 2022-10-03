#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UGCHandle_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UGCHandle_t__Class** type_info;
        inline app::UGCHandle_t__Class* get_class() {
            return il2cpp::get_class<app::UGCHandle_t__Class>(type_info, "Steamworks", "UGCHandle_t");
        }
        inline app::UGCHandle_t* create() {
            return il2cpp::create_object<app::UGCHandle_t>(get_class());
        }
        inline app::UGCHandle_t__Boxed* box(app::UGCHandle_t value) {
            return il2cpp::box_value<app::UGCHandle_t__Boxed>(get_class(), value);
        }
    } // namespace UGCHandle_t
} // namespace app::classes::types
