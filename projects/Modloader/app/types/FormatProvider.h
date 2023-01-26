#pragma once
#include <Modloader/app/structs/FormatProvider.h>
#include <Modloader/app/structs/FormatProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FormatProvider {
        inline app::FormatProvider__Class** type_info() {
            static app::FormatProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FormatProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FormatProvider__Class* get_class() {
            return il2cpp::get_class<app::FormatProvider__Class>(type_info(), "System.Globalization", "FormatProvider");
        }
        inline app::FormatProvider* create() {
            return il2cpp::create_object<app::FormatProvider>(get_class());
        }
    } // namespace FormatProvider
} // namespace app::classes::types
