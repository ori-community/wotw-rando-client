#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CultureTypes__Enum {
        namespace {
            inline app::CultureTypes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CultureTypes__Enum__Class** type_info = &type_info_ref;
        inline app::CultureTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::CultureTypes__Enum__Class>(type_info, "System.Globalization", "CultureTypes");
        }
        inline app::CultureTypes__Enum* create() {
            return il2cpp::create_object<app::CultureTypes__Enum>(get_class());
        }
    } // namespace CultureTypes__Enum
} // namespace app::classes::types
