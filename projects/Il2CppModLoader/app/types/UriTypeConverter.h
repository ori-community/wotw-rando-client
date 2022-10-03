#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriTypeConverter {
        namespace {
            app::UriTypeConverter__Class* type_info_ref = nullptr;
        }
        app::UriTypeConverter__Class** type_info = &type_info_ref;
        inline app::UriTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::UriTypeConverter__Class>(type_info, "System", "UriTypeConverter");
        }
        inline app::UriTypeConverter* create() {
            return il2cpp::create_object<app::UriTypeConverter>(get_class());
        }
    } // namespace UriTypeConverter
} // namespace app::classes::types
