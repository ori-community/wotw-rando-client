#pragma once
#include <Modloader/app/structs/FailedToLoadScriptObject.h>
#include <Modloader/app/structs/FailedToLoadScriptObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FailedToLoadScriptObject {
        inline app::FailedToLoadScriptObject__Class** type_info() {
            static app::FailedToLoadScriptObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FailedToLoadScriptObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FailedToLoadScriptObject__Class* get_class() {
            return il2cpp::get_class<app::FailedToLoadScriptObject__Class>(type_info(), "UnityEngine", "FailedToLoadScriptObject");
        }
        inline app::FailedToLoadScriptObject* create() {
            return il2cpp::create_object<app::FailedToLoadScriptObject>(get_class());
        }
    } // namespace FailedToLoadScriptObject
} // namespace app::classes::types
