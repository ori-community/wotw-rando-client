#pragma once
#include <Modloader/app/structs/WebResources_ResponsePreamble.h>
#include <Modloader/app/structs/WebResources_ResponsePreamble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebResources_ResponsePreamble {
        inline app::WebResources_ResponsePreamble__Class** type_info() {
            static app::WebResources_ResponsePreamble__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebResources_ResponsePreamble__Class**)(modloader::win::memory::resolve_rva(0x047260D0));
            }
            return cache;
        }
        inline app::WebResources_ResponsePreamble__Class* get_class() {
            return il2cpp::get_nested_class<app::WebResources_ResponsePreamble__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "WebResources", "ResponsePreamble");
        }
        inline app::WebResources_ResponsePreamble* create() {
            return il2cpp::create_object<app::WebResources_ResponsePreamble>(get_class());
        }
    } // namespace WebResources_ResponsePreamble
} // namespace app::classes::types
