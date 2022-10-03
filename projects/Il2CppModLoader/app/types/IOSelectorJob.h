#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IOSelectorJob {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IOSelectorJob__Class** type_info;
        inline app::IOSelectorJob__Class* get_class() {
            return il2cpp::get_class<app::IOSelectorJob__Class>(type_info, "System", "IOSelectorJob");
        }
        inline app::IOSelectorJob* create() {
            return il2cpp::create_object<app::IOSelectorJob>(get_class());
        }
    } // namespace IOSelectorJob
} // namespace app::classes::types
