#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FormattableString {
        namespace {
            inline app::FormattableString__Class* type_info_ref = nullptr;
        }
        inline app::FormattableString__Class** type_info = &type_info_ref;
        inline app::FormattableString__Class* get_class() {
            return il2cpp::get_class<app::FormattableString__Class>(type_info, "System", "FormattableString");
        }
        inline app::FormattableString* create() {
            return il2cpp::create_object<app::FormattableString>(get_class());
        }
    } // namespace FormattableString
} // namespace app::classes::types
