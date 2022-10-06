#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForceGrabReleaseZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ForceGrabReleaseZone__Class** type_info;
        inline app::ForceGrabReleaseZone__Class* get_class() {
            return il2cpp::get_class<app::ForceGrabReleaseZone__Class>(type_info, "", "ForceGrabReleaseZone");
        }
        inline app::ForceGrabReleaseZone* create() {
            return il2cpp::create_object<app::ForceGrabReleaseZone>(get_class());
        }
        inline app::ForceGrabReleaseZone__Array* create_array(int size) {
            return il2cpp::array_new<app::ForceGrabReleaseZone__Array>(get_class(), size);
        }
        inline app::ForceGrabReleaseZone__Array* create_array(const std::vector<app::ForceGrabReleaseZone*>& items) {
            return il2cpp::array_new<app::ForceGrabReleaseZone__Array>(get_class(), items);
        }
    } // namespace ForceGrabReleaseZone
} // namespace app::classes::types
