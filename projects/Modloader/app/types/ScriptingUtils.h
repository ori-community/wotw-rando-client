#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScriptingUtils__Class.h>
#include <Modloader/app/structs/ScriptingUtils.h>

namespace app::classes::types {
    namespace ScriptingUtils {
        namespace {
            inline app::ScriptingUtils__Class* type_info_ref = nullptr;
        }
        inline app::ScriptingUtils__Class** type_info = &type_info_ref;
        inline app::ScriptingUtils__Class* get_class() {
            return il2cpp::get_class<app::ScriptingUtils__Class>(type_info, "UnityEngineInternal", "ScriptingUtils");
        }
        inline app::ScriptingUtils* create() {
            return il2cpp::create_object<app::ScriptingUtils>(get_class());
        }
    } // namespace ScriptingUtils
} // namespace app::classes::types
