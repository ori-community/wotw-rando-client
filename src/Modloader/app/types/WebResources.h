#pragma once
#include <Modloader/app/structs/WebResources.h>
#include <Modloader/app/structs/WebResources__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebResources {
        inline app::WebResources__Class** type_info() {
            static app::WebResources__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebResources__Class**)(modloader::win::memory::resolve_rva(0x04733098));
            }
            return cache;
        }
        inline app::WebResources__Class* get_class() {
            return il2cpp::get_class<app::WebResources__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "WebResources");
        }
        inline app::WebResources* create() {
            return il2cpp::create_object<app::WebResources>(get_class());
        }
    } // namespace WebResources
} // namespace app::classes::types
