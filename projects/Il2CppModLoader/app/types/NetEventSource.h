#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetEventSource {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NetEventSource__Class** type_info;
        inline app::NetEventSource__Class* get_class() {
            return il2cpp::get_class<app::NetEventSource__Class>(type_info, "System.Net", "NetEventSource");
        }
        inline app::NetEventSource* create() {
            return il2cpp::create_object<app::NetEventSource>(get_class());
        }
    } // namespace NetEventSource
} // namespace app::classes::types
