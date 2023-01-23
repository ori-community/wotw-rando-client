#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FailedToLoadScriptObject__Class.h>
#include <Modloader/app/structs/FailedToLoadScriptObject.h>

namespace app::classes::types {
    namespace FailedToLoadScriptObject {
        namespace {
            inline app::FailedToLoadScriptObject__Class* type_info_ref = nullptr;
        }
        inline app::FailedToLoadScriptObject__Class** type_info = &type_info_ref;
        inline app::FailedToLoadScriptObject__Class* get_class() {
            return il2cpp::get_class<app::FailedToLoadScriptObject__Class>(type_info, "UnityEngine", "FailedToLoadScriptObject");
        }
        inline app::FailedToLoadScriptObject* create() {
            return il2cpp::create_object<app::FailedToLoadScriptObject>(get_class());
        }
    } // namespace FailedToLoadScriptObject
} // namespace app::classes::types
