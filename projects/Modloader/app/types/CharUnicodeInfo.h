#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharUnicodeInfo__Class.h>
#include <Modloader/app/structs/CharUnicodeInfo.h>

namespace app::classes::types {
    namespace CharUnicodeInfo {
        inline app::CharUnicodeInfo__Class** type_info = (app::CharUnicodeInfo__Class**)(modloader::win::memory::resolve_rva(0x04756870));
        inline app::CharUnicodeInfo__Class* get_class() {
            return il2cpp::get_class<app::CharUnicodeInfo__Class>(type_info, "System.Globalization", "CharUnicodeInfo");
        }
        inline app::CharUnicodeInfo* create() {
            return il2cpp::create_object<app::CharUnicodeInfo>(get_class());
        }
    } // namespace CharUnicodeInfo
} // namespace app::classes::types
