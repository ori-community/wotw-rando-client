#pragma once
#include <Modloader/app/structs/DateTimeUtils.h>
#include <Modloader/app/structs/DateTimeUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DateTimeUtils {
        inline app::DateTimeUtils__Class** type_info() {
            static app::DateTimeUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DateTimeUtils__Class**)(modloader::win::memory::resolve_rva(0x047259A8));
            }
            return cache;
        }
        inline app::DateTimeUtils__Class* get_class() {
            return il2cpp::get_class<app::DateTimeUtils__Class>(type_info(), "Newtonsoft.Json.Utilities", "DateTimeUtils");
        }
        inline app::DateTimeUtils* create() {
            return il2cpp::create_object<app::DateTimeUtils>(get_class());
        }
    } // namespace DateTimeUtils
} // namespace app::classes::types
