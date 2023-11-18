#pragma once
#include <Modloader/app/structs/XalHttpHeader__Array.h>
#include <Modloader/app/structs/XalHttpHeader__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalHttpHeader__Array {
        inline app::XalHttpHeader__Array__Class** type_info() {
            static app::XalHttpHeader__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalHttpHeader__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalHttpHeader__Array__Class* get_class() {
            return il2cpp::get_class<app::XalHttpHeader__Array__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalHttpHeader[]");
        }
        inline app::XalHttpHeader__Array* create() {
            return il2cpp::create_object<app::XalHttpHeader__Array>(get_class());
        }
    } // namespace XalHttpHeader__Array
} // namespace app::classes::types
