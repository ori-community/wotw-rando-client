#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsResult__Class** type_info;
        inline app::fsResult__Class* get_class() {
            return il2cpp::get_class<app::fsResult__Class>(type_info, "FullSerializer", "fsResult");
        }
        inline app::fsResult* create() {
            return il2cpp::create_object<app::fsResult>(get_class());
        }
        inline app::fsResult__Boxed* box(app::fsResult value) {
            return il2cpp::box_value<app::fsResult__Boxed>(get_class(), value);
        }
    } // namespace fsResult
} // namespace app::classes::types
