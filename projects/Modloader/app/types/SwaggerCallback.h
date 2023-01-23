#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwaggerCallback__Class.h>
#include <Modloader/app/structs/SwaggerCallback.h>

namespace app::classes::types {
    namespace SwaggerCallback {
        namespace {
            inline app::SwaggerCallback__Class* type_info_ref = nullptr;
        }
        inline app::SwaggerCallback__Class** type_info = &type_info_ref;
        inline app::SwaggerCallback__Class* get_class() {
            return il2cpp::get_class<app::SwaggerCallback__Class>(type_info, "", "SwaggerCallback");
        }
        inline app::SwaggerCallback* create() {
            return il2cpp::create_object<app::SwaggerCallback>(get_class());
        }
    } // namespace SwaggerCallback
} // namespace app::classes::types
