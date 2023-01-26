#pragma once
#include <Modloader/app/structs/MakeScriptableObject.h>
#include <Modloader/app/structs/MakeScriptableObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MakeScriptableObject {
        inline app::MakeScriptableObject__Class** type_info() {
            static app::MakeScriptableObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MakeScriptableObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MakeScriptableObject__Class* get_class() {
            return il2cpp::get_class<app::MakeScriptableObject__Class>(type_info(), "", "MakeScriptableObject");
        }
        inline app::MakeScriptableObject* create() {
            return il2cpp::create_object<app::MakeScriptableObject>(get_class());
        }
    } // namespace MakeScriptableObject
} // namespace app::classes::types
