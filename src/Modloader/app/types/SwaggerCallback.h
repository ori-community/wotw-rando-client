#pragma once
#include <Modloader/app/structs/SwaggerCallback.h>
#include <Modloader/app/structs/SwaggerCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwaggerCallback {
        inline app::SwaggerCallback__Class** type_info() {
            static app::SwaggerCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwaggerCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwaggerCallback__Class* get_class() {
            return il2cpp::get_class<app::SwaggerCallback__Class>(type_info(), "", "SwaggerCallback");
        }
        inline app::SwaggerCallback* create() {
            return il2cpp::create_object<app::SwaggerCallback>(get_class());
        }
    } // namespace SwaggerCallback
} // namespace app::classes::types
