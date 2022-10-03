#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FormattableString {
        namespace {
            app::FormattableString__Class* type_info_ref = nullptr;
        }
        app::FormattableString__Class** type_info = &type_info_ref;
        inline app::FormattableString__Class* get_class() {
            return il2cpp::get_class<app::FormattableString__Class>(type_info, "System", "FormattableString");
        }
        inline app::FormattableString* create() {
            return il2cpp::create_object<app::FormattableString>(get_class());
        }
    } // namespace FormattableString
} // namespace app::classes::types
