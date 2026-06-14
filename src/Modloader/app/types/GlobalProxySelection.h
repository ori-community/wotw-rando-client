#pragma once
#include <Modloader/app/structs/GlobalProxySelection.h>
#include <Modloader/app/structs/GlobalProxySelection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalProxySelection {
        inline app::GlobalProxySelection__Class** type_info() {
            static app::GlobalProxySelection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlobalProxySelection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlobalProxySelection__Class* get_class() {
            return il2cpp::get_class<app::GlobalProxySelection__Class>(type_info(), "System.Net", "GlobalProxySelection");
        }
        inline app::GlobalProxySelection* create() {
            return il2cpp::create_object<app::GlobalProxySelection>(get_class());
        }
    } // namespace GlobalProxySelection
} // namespace app::classes::types
