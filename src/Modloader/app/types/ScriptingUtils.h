#pragma once
#include <Modloader/app/structs/ScriptingUtils.h>
#include <Modloader/app/structs/ScriptingUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScriptingUtils {
        inline app::ScriptingUtils__Class** type_info() {
            static app::ScriptingUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScriptingUtils__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScriptingUtils__Class* get_class() {
            return il2cpp::get_class<app::ScriptingUtils__Class>(type_info(), "UnityEngineInternal", "ScriptingUtils");
        }
        inline app::ScriptingUtils* create() {
            return il2cpp::create_object<app::ScriptingUtils>(get_class());
        }
    } // namespace ScriptingUtils
} // namespace app::classes::types
