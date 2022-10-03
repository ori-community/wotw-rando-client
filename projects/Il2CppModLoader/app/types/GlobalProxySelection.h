#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalProxySelection {
        namespace {
            app::GlobalProxySelection__Class* type_info_ref = nullptr;
        }
        app::GlobalProxySelection__Class** type_info = &type_info_ref;
        inline app::GlobalProxySelection__Class* get_class() {
            return il2cpp::get_class<app::GlobalProxySelection__Class>(type_info, "System.Net", "GlobalProxySelection");
        }
        inline app::GlobalProxySelection* create() {
            return il2cpp::create_object<app::GlobalProxySelection>(get_class());
        }
    } // namespace GlobalProxySelection
} // namespace app::classes::types
