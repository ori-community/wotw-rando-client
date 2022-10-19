#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ForceGrabReleaseZone__Array {
        namespace {
            inline app::ForceGrabReleaseZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::ForceGrabReleaseZone__Array__Class** type_info = &type_info_ref;
        inline app::ForceGrabReleaseZone__Array__Class* get_class() {
            return il2cpp::get_class<app::ForceGrabReleaseZone__Array__Class>(type_info, "", "ForceGrabReleaseZone[]");
        }
        inline app::ForceGrabReleaseZone__Array* create() {
            return il2cpp::create_object<app::ForceGrabReleaseZone__Array>(get_class());
        }
    } // namespace ForceGrabReleaseZone__Array
} // namespace app::classes::types
