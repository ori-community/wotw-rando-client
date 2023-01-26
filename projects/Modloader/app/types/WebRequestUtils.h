#pragma once
#include <Modloader/app/structs/WebRequestUtils.h>
#include <Modloader/app/structs/WebRequestUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebRequestUtils {
        inline app::WebRequestUtils__Class** type_info() {
            static app::WebRequestUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebRequestUtils__Class**)(modloader::win::memory::resolve_rva(0x0477ED88));
            }
            return cache;
        }
        inline app::WebRequestUtils__Class* get_class() {
            return il2cpp::get_class<app::WebRequestUtils__Class>(type_info(), "UnityEngineInternal", "WebRequestUtils");
        }
        inline app::WebRequestUtils* create() {
            return il2cpp::create_object<app::WebRequestUtils>(get_class());
        }
    } // namespace WebRequestUtils
} // namespace app::classes::types
