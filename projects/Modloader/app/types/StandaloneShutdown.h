#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StandaloneShutdown__Class.h>
#include <Modloader/app/structs/StandaloneShutdown.h>

namespace app::classes::types {
    namespace StandaloneShutdown {
        namespace {
            inline app::StandaloneShutdown__Class* type_info_ref = nullptr;
        }
        inline app::StandaloneShutdown__Class** type_info = &type_info_ref;
        inline app::StandaloneShutdown__Class* get_class() {
            return il2cpp::get_class<app::StandaloneShutdown__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "StandaloneShutdown");
        }
        inline app::StandaloneShutdown* create() {
            return il2cpp::create_object<app::StandaloneShutdown>(get_class());
        }
    } // namespace StandaloneShutdown
} // namespace app::classes::types
