#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FORMATFLAGS__Enum {
        namespace {
            inline app::FORMATFLAGS__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FORMATFLAGS__Enum__Class** type_info = &type_info_ref;
        inline app::FORMATFLAGS__Enum__Class* get_class() {
            return il2cpp::get_class<app::FORMATFLAGS__Enum__Class>(type_info, "System.Globalization", "FORMATFLAGS");
        }
        inline app::FORMATFLAGS__Enum* create() {
            return il2cpp::create_object<app::FORMATFLAGS__Enum>(get_class());
        }
    } // namespace FORMATFLAGS__Enum
} // namespace app::classes::types
