#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JavaScriptUtils__Class.h>
#include <Modloader/app/structs/JavaScriptUtils.h>

namespace app::classes::types {
    namespace JavaScriptUtils {
        inline app::JavaScriptUtils__Class** type_info = (app::JavaScriptUtils__Class**)(modloader::win::memory::resolve_rva(0x047222B0));
        inline app::JavaScriptUtils__Class* get_class() {
            return il2cpp::get_class<app::JavaScriptUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "JavaScriptUtils");
        }
        inline app::JavaScriptUtils* create() {
            return il2cpp::create_object<app::JavaScriptUtils>(get_class());
        }
    } // namespace JavaScriptUtils
} // namespace app::classes::types
