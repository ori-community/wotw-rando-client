#pragma once
#include <Modloader/app/structs/DateTimeFormatInfo.h>
#include <Modloader/app/structs/DateTimeFormatInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeFormatInfo {
        inline app::DateTimeFormatInfo__Class** type_info() {
            static app::DateTimeFormatInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DateTimeFormatInfo__Class**)(modloader::win::memory::resolve_rva(0x047769A0));
            }
            return cache;
        }
        inline app::DateTimeFormatInfo__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFormatInfo__Class>(type_info(), "System.Globalization", "DateTimeFormatInfo");
        }
        inline app::DateTimeFormatInfo* create() {
            return il2cpp::create_object<app::DateTimeFormatInfo>(get_class());
        }
    } // namespace DateTimeFormatInfo
} // namespace app::classes::types
