#pragma once
#include <Modloader/app/structs/WebUtility_HtmlEntities.h>
#include <Modloader/app/structs/WebUtility_HtmlEntities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebUtility_HtmlEntities {
        inline app::WebUtility_HtmlEntities__Class** type_info() {
            static app::WebUtility_HtmlEntities__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebUtility_HtmlEntities__Class**)(modloader::win::memory::resolve_rva(0x047707F8));
            }
            return cache;
        }
        inline app::WebUtility_HtmlEntities__Class* get_class() {
            return il2cpp::get_nested_class<app::WebUtility_HtmlEntities__Class>(type_info(), "System.Net", "WebUtility", "HtmlEntities");
        }
        inline app::WebUtility_HtmlEntities* create() {
            return il2cpp::create_object<app::WebUtility_HtmlEntities>(get_class());
        }
    } // namespace WebUtility_HtmlEntities
} // namespace app::classes::types
