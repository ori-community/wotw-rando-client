#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrailPathProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TrailPathProvider__Class** type_info;
        inline app::TrailPathProvider__Class* get_class() {
            return il2cpp::get_class<app::TrailPathProvider__Class>(type_info, "", "TrailPathProvider");
        }
        inline app::TrailPathProvider* create() {
            return il2cpp::create_object<app::TrailPathProvider>(get_class());
        }
    } // namespace TrailPathProvider
} // namespace app::classes::types
