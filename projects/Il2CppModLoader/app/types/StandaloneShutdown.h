#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StandaloneShutdown {
        namespace {
            app::StandaloneShutdown__Class* type_info_ref = nullptr;
        }
        app::StandaloneShutdown__Class** type_info = &type_info_ref;
        inline app::StandaloneShutdown__Class* get_class() {
            return il2cpp::get_class<app::StandaloneShutdown__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "StandaloneShutdown");
        }
        inline app::StandaloneShutdown* create() {
            return il2cpp::create_object<app::StandaloneShutdown>(get_class());
        }
    } // namespace StandaloneShutdown
} // namespace app::classes::types
