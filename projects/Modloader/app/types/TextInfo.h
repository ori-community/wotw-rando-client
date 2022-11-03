#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextInfo {
        inline app::TextInfo__Class** type_info = (app::TextInfo__Class**)(modloader::win::memory::resolve_rva(0x0470E740));
        inline app::TextInfo__Class* get_class() {
            return il2cpp::get_class<app::TextInfo__Class>(type_info, "System.Globalization", "TextInfo");
        }
        inline app::TextInfo* create() {
            return il2cpp::create_object<app::TextInfo>(get_class());
        }
    } // namespace TextInfo
} // namespace app::classes::types
