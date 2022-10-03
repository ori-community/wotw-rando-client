#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebUtility_HtmlEntities {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebUtility_HtmlEntities__Class** type_info;
        inline app::WebUtility_HtmlEntities__Class* get_class() {
            return il2cpp::get_nested_class<app::WebUtility_HtmlEntities__Class>(type_info, "System.Net", "WebUtility", "HtmlEntities");
        }
        inline app::WebUtility_HtmlEntities* create() {
            return il2cpp::create_object<app::WebUtility_HtmlEntities>(get_class());
        }
    } // namespace WebUtility_HtmlEntities
} // namespace app::classes::types
