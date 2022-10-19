#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringBuffer {
        namespace {
            inline app::StringBuffer__Class* type_info_ref = nullptr;
        }
        inline app::StringBuffer__Class** type_info = &type_info_ref;
        inline app::StringBuffer__Class* get_class() {
            return il2cpp::get_class<app::StringBuffer__Class>(type_info, "Newtonsoft.Json.Utilities", "StringBuffer");
        }
        inline app::StringBuffer* create() {
            return il2cpp::create_object<app::StringBuffer>(get_class());
        }
        inline app::StringBuffer__Boxed* box(app::StringBuffer value) {
            return il2cpp::box_value<app::StringBuffer__Boxed>(get_class(), value);
        }
    } // namespace StringBuffer
} // namespace app::classes::types
