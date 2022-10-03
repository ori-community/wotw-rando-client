#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwaggerCallback {
        namespace {
            app::SwaggerCallback__Class* type_info_ref = nullptr;
        }
        app::SwaggerCallback__Class** type_info = &type_info_ref;
        inline app::SwaggerCallback__Class* get_class() {
            return il2cpp::get_class<app::SwaggerCallback__Class>(type_info, "", "SwaggerCallback");
        }
        inline app::SwaggerCallback* create() {
            return il2cpp::create_object<app::SwaggerCallback>(get_class());
        }
    } // namespace SwaggerCallback
} // namespace app::classes::types
