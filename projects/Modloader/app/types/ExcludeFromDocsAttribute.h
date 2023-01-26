#pragma once
#include <Modloader/app/structs/ExcludeFromDocsAttribute.h>
#include <Modloader/app/structs/ExcludeFromDocsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExcludeFromDocsAttribute {
        inline app::ExcludeFromDocsAttribute__Class** type_info() {
            static app::ExcludeFromDocsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExcludeFromDocsAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExcludeFromDocsAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExcludeFromDocsAttribute__Class>(type_info(), "UnityEngine.Internal", "ExcludeFromDocsAttribute");
        }
        inline app::ExcludeFromDocsAttribute* create() {
            return il2cpp::create_object<app::ExcludeFromDocsAttribute>(get_class());
        }
    } // namespace ExcludeFromDocsAttribute
} // namespace app::classes::types
