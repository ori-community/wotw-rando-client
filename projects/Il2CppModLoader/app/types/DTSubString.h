#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DTSubString {
        namespace {
            app::DTSubString__Class* type_info_ref = nullptr;
        }
        app::DTSubString__Class** type_info = &type_info_ref;
        inline app::DTSubString__Class* get_class() {
            return il2cpp::get_class<app::DTSubString__Class>(type_info, "System", "DTSubString");
        }
        inline app::DTSubString* create() {
            return il2cpp::create_object<app::DTSubString>(get_class());
        }
        inline app::DTSubString__Boxed* box(app::DTSubString value) {
            return il2cpp::box_value<app::DTSubString__Boxed>(get_class(), value);
        }
    } // namespace DTSubString
} // namespace app::classes::types
