#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StringReference {
        namespace {
            inline app::StringReference__Class* type_info_ref = nullptr;
        }
        inline app::StringReference__Class** type_info = &type_info_ref;
        inline app::StringReference__Class* get_class() {
            return il2cpp::get_class<app::StringReference__Class>(type_info, "Newtonsoft.Json.Utilities", "StringReference");
        }
        inline app::StringReference* create() {
            return il2cpp::create_object<app::StringReference>(get_class());
        }
        inline app::StringReference__Boxed* box(app::StringReference value) {
            return il2cpp::box_value<app::StringReference__Boxed>(get_class(), value);
        }
    } // namespace StringReference
} // namespace app::classes::types
