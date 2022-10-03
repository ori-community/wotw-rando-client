#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SiteId_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SiteId_t__Class** type_info;
        inline app::SiteId_t__Class* get_class() {
            return il2cpp::get_class<app::SiteId_t__Class>(type_info, "Steamworks", "SiteId_t");
        }
        inline app::SiteId_t* create() {
            return il2cpp::create_object<app::SiteId_t>(get_class());
        }
        inline app::SiteId_t__Boxed* box(app::SiteId_t value) {
            return il2cpp::box_value<app::SiteId_t__Boxed>(get_class(), value);
        }
    } // namespace SiteId_t
} // namespace app::classes::types
