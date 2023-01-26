#pragma once
#include <Modloader/app/structs/ContentSizeFitter.h>
#include <Modloader/app/structs/ContentSizeFitter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContentSizeFitter {
        inline app::ContentSizeFitter__Class** type_info() {
            static app::ContentSizeFitter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContentSizeFitter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContentSizeFitter__Class* get_class() {
            return il2cpp::get_class<app::ContentSizeFitter__Class>(type_info(), "UnityEngine.UI", "ContentSizeFitter");
        }
        inline app::ContentSizeFitter* create() {
            return il2cpp::create_object<app::ContentSizeFitter>(get_class());
        }
    } // namespace ContentSizeFitter
} // namespace app::classes::types
