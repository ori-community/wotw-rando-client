#pragma once
#include <Modloader/app/structs/EditorWebResources.h>
#include <Modloader/app/structs/EditorWebResources__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EditorWebResources {
        inline app::EditorWebResources__Class** type_info() {
            static app::EditorWebResources__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EditorWebResources__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EditorWebResources__Class* get_class() {
            return il2cpp::get_class<app::EditorWebResources__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "EditorWebResources");
        }
        inline app::EditorWebResources* create() {
            return il2cpp::create_object<app::EditorWebResources>(get_class());
        }
    } // namespace EditorWebResources
} // namespace app::classes::types
