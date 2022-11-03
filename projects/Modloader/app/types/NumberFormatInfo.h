#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NumberFormatInfo {
        inline app::NumberFormatInfo__Class** type_info = (app::NumberFormatInfo__Class**)(modloader::win::memory::resolve_rva(0x04710600));
        inline app::NumberFormatInfo__Class* get_class() {
            return il2cpp::get_class<app::NumberFormatInfo__Class>(type_info, "System.Globalization", "NumberFormatInfo");
        }
        inline app::NumberFormatInfo* create() {
            return il2cpp::create_object<app::NumberFormatInfo>(get_class());
        }
    } // namespace NumberFormatInfo
} // namespace app::classes::types
