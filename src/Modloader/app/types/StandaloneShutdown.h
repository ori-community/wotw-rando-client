#pragma once
#include <Modloader/app/structs/StandaloneShutdown.h>
#include <Modloader/app/structs/StandaloneShutdown__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StandaloneShutdown {
        inline app::StandaloneShutdown__Class** type_info() {
            static app::StandaloneShutdown__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StandaloneShutdown__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StandaloneShutdown__Class* get_class() {
            return il2cpp::get_class<app::StandaloneShutdown__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "StandaloneShutdown");
        }
        inline app::StandaloneShutdown* create() {
            return il2cpp::create_object<app::StandaloneShutdown>(get_class());
        }
    } // namespace StandaloneShutdown
} // namespace app::classes::types
