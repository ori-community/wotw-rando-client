#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnicodeEncodingConformance__Enum {
        namespace {
            inline app::UnicodeEncodingConformance__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UnicodeEncodingConformance__Enum__Class** type_info = &type_info_ref;
        inline app::UnicodeEncodingConformance__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnicodeEncodingConformance__Enum__Class>(type_info, "System.Net.Configuration", "UnicodeEncodingConformance");
        }
        inline app::UnicodeEncodingConformance__Enum* create() {
            return il2cpp::create_object<app::UnicodeEncodingConformance__Enum>(get_class());
        }
    } // namespace UnicodeEncodingConformance__Enum
} // namespace app::classes::types
