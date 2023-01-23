#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FormattableString__Class.h>
#include <Modloader/app/structs/FormattableString.h>

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
