#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DiscoverAreasEntity {
        namespace {
            app::DiscoverAreasEntity__Class* type_info_ref = nullptr;
        }
        app::DiscoverAreasEntity__Class** type_info = &type_info_ref;
        inline app::DiscoverAreasEntity__Class* get_class() {
            return il2cpp::get_class<app::DiscoverAreasEntity__Class>(type_info, "Moon.Timeline", "DiscoverAreasEntity");
        }
        inline app::DiscoverAreasEntity* create() {
            return il2cpp::create_object<app::DiscoverAreasEntity>(get_class());
        }
    } // namespace DiscoverAreasEntity
} // namespace app::classes::types
