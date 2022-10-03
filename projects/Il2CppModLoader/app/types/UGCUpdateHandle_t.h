#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UGCUpdateHandle_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UGCUpdateHandle_t__Class** type_info;
        inline app::UGCUpdateHandle_t__Class* get_class() {
            return il2cpp::get_class<app::UGCUpdateHandle_t__Class>(type_info, "Steamworks", "UGCUpdateHandle_t");
        }
        inline app::UGCUpdateHandle_t* create() {
            return il2cpp::create_object<app::UGCUpdateHandle_t>(get_class());
        }
        inline app::UGCUpdateHandle_t__Boxed* box(app::UGCUpdateHandle_t value) {
            return il2cpp::box_value<app::UGCUpdateHandle_t__Boxed>(get_class(), value);
        }
    } // namespace UGCUpdateHandle_t
} // namespace app::classes::types
