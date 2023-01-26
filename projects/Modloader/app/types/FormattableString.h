#pragma once
#include <Modloader/app/structs/FormattableString.h>
#include <Modloader/app/structs/FormattableString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FormattableString {
        inline app::FormattableString__Class** type_info() {
            static app::FormattableString__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FormattableString__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FormattableString__Class* get_class() {
            return il2cpp::get_class<app::FormattableString__Class>(type_info(), "System", "FormattableString");
        }
        inline app::FormattableString* create() {
            return il2cpp::create_object<app::FormattableString>(get_class());
        }
    } // namespace FormattableString
} // namespace app::classes::types
