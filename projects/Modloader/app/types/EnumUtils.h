#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnumUtils {
        inline app::EnumUtils__Class** type_info = (app::EnumUtils__Class**)(modloader::win::memory::resolve_rva(0x04700950));
        inline app::EnumUtils__Class* get_class() {
            return il2cpp::get_class<app::EnumUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "EnumUtils");
        }
        inline app::EnumUtils* create() {
            return il2cpp::create_object<app::EnumUtils>(get_class());
        }
    } // namespace EnumUtils
} // namespace app::classes::types
