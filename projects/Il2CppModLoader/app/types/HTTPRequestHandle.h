#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HTTPRequestHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HTTPRequestHandle__Class** type_info;
        inline app::HTTPRequestHandle__Class* get_class() {
            return il2cpp::get_class<app::HTTPRequestHandle__Class>(type_info, "Steamworks", "HTTPRequestHandle");
        }
        inline app::HTTPRequestHandle* create() {
            return il2cpp::create_object<app::HTTPRequestHandle>(get_class());
        }
        inline app::HTTPRequestHandle__Boxed* box(app::HTTPRequestHandle value) {
            return il2cpp::box_value<app::HTTPRequestHandle__Boxed>(get_class(), value);
        }
    } // namespace HTTPRequestHandle
} // namespace app::classes::types
