#pragma once
#include <Modloader/app/structs/GhostProxyPuppetMaster.h>
#include <Modloader/app/structs/GhostProxyPuppetMaster__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostProxyPuppetMaster {
        inline app::GhostProxyPuppetMaster__Class** type_info() {
            static app::GhostProxyPuppetMaster__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostProxyPuppetMaster__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostProxyPuppetMaster__Class* get_class() {
            return il2cpp::get_class<app::GhostProxyPuppetMaster__Class>(type_info(), "", "GhostProxyPuppetMaster");
        }
        inline app::GhostProxyPuppetMaster* create() {
            return il2cpp::create_object<app::GhostProxyPuppetMaster>(get_class());
        }
    } // namespace GhostProxyPuppetMaster
} // namespace app::classes::types
