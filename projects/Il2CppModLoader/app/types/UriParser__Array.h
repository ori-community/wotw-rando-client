#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriParser__Array {
        namespace {
            app::UriParser__Array__Class* type_info_ref = nullptr;
        }
        app::UriParser__Array__Class** type_info = &type_info_ref;
        inline app::UriParser__Array__Class* get_class() {
            return il2cpp::get_class<app::UriParser__Array__Class>(type_info, "System", "UriParser[]");
        }
        inline app::UriParser__Array* create() {
            return il2cpp::create_object<app::UriParser__Array>(get_class());
        }
    } // namespace UriParser__Array
} // namespace app::classes::types
