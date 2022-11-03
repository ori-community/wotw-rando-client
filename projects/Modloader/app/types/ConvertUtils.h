#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConvertUtils {
        inline app::ConvertUtils__Class** type_info = (app::ConvertUtils__Class**)(modloader::win::memory::resolve_rva(0x04737C60));
        inline app::ConvertUtils__Class* get_class() {
            return il2cpp::get_class<app::ConvertUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "ConvertUtils");
        }
        inline app::ConvertUtils* create() {
            return il2cpp::create_object<app::ConvertUtils>(get_class());
        }
    } // namespace ConvertUtils
} // namespace app::classes::types
