#pragma once
#include <Modloader/app/structs/FormatProvider_Number.h>
#include <Modloader/app/structs/FormatProvider_Number__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FormatProvider_Number {
        inline app::FormatProvider_Number__Class** type_info() {
            static app::FormatProvider_Number__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FormatProvider_Number__Class**)(modloader::win::memory::resolve_rva(0x04731B28));
            }
            return cache;
        }
        inline app::FormatProvider_Number__Class* get_class() {
            return il2cpp::get_nested_class<app::FormatProvider_Number__Class>(type_info(), "System.Globalization", "FormatProvider", "Number");
        }
        inline app::FormatProvider_Number* create() {
            return il2cpp::create_object<app::FormatProvider_Number>(get_class());
        }
    } // namespace FormatProvider_Number
} // namespace app::classes::types
