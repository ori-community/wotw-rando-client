#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpenedHost {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpenedHost__Class** type_info;
        inline app::OpenedHost__Class* get_class() {
            return il2cpp::get_class<app::OpenedHost__Class>(type_info, "System.Xml", "OpenedHost");
        }
        inline app::OpenedHost* create() {
            return il2cpp::create_object<app::OpenedHost>(get_class());
        }
    } // namespace OpenedHost
} // namespace app::classes::types
