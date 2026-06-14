#pragma once
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/NumberFormatInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NumberFormatInfo {
        inline app::NumberFormatInfo__Class** type_info() {
            static app::NumberFormatInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NumberFormatInfo__Class**)(modloader::win::memory::resolve_rva(0x04710600));
            }
            return cache;
        }
        inline app::NumberFormatInfo__Class* get_class() {
            return il2cpp::get_class<app::NumberFormatInfo__Class>(type_info(), "System.Globalization", "NumberFormatInfo");
        }
        inline app::NumberFormatInfo* create() {
            return il2cpp::create_object<app::NumberFormatInfo>(get_class());
        }
    } // namespace NumberFormatInfo
} // namespace app::classes::types
