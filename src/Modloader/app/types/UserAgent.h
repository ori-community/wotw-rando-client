#pragma once
#include <Modloader/app/structs/UserAgent.h>
#include <Modloader/app/structs/UserAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserAgent {
        inline app::UserAgent__Class** type_info() {
            static app::UserAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserAgent__Class**)(modloader::win::memory::resolve_rva(0x0474CE58));
            }
            return cache;
        }
        inline app::UserAgent__Class* get_class() {
            return il2cpp::get_class<app::UserAgent__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "UserAgent");
        }
        inline app::UserAgent* create() {
            return il2cpp::create_object<app::UserAgent>(get_class());
        }
    } // namespace UserAgent
} // namespace app::classes::types
