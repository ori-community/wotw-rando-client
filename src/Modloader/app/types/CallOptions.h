#pragma once
#include <Modloader/app/structs/CallOptions.h>
#include <Modloader/app/structs/CallOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallOptions {
        inline app::CallOptions__Class** type_info() {
            static app::CallOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallOptions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallOptions__Class* get_class() {
            return il2cpp::get_class<app::CallOptions__Class>(type_info(), "", "CallOptions");
        }
        inline app::CallOptions* create() {
            return il2cpp::create_object<app::CallOptions>(get_class());
        }
    } // namespace CallOptions
} // namespace app::classes::types
