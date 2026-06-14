#pragma once
#include <Modloader/app/structs/StandaloneWebResources_IndexEntry__Array.h>
#include <Modloader/app/structs/StandaloneWebResources_IndexEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StandaloneWebResources_IndexEntry__Array {
        inline app::StandaloneWebResources_IndexEntry__Array__Class** type_info() {
            static app::StandaloneWebResources_IndexEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StandaloneWebResources_IndexEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StandaloneWebResources_IndexEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::StandaloneWebResources_IndexEntry__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "StandaloneWebResources+IndexEntry[]");
        }
        inline app::StandaloneWebResources_IndexEntry__Array* create() {
            return il2cpp::create_object<app::StandaloneWebResources_IndexEntry__Array>(get_class());
        }
    } // namespace StandaloneWebResources_IndexEntry__Array
} // namespace app::classes::types
