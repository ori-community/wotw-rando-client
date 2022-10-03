#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HServerQuery {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HServerQuery__Class** type_info;
        inline app::HServerQuery__Class* get_class() {
            return il2cpp::get_class<app::HServerQuery__Class>(type_info, "Steamworks", "HServerQuery");
        }
        inline app::HServerQuery* create() {
            return il2cpp::create_object<app::HServerQuery>(get_class());
        }
        inline app::HServerQuery__Boxed* box(app::HServerQuery value) {
            return il2cpp::box_value<app::HServerQuery__Boxed>(get_class(), value);
        }
    } // namespace HServerQuery
} // namespace app::classes::types
