#pragma once
#include <Modloader/app/structs/AsyncHelpers.h>
#include <Modloader/app/structs/AsyncHelpers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncHelpers {
        inline app::AsyncHelpers__Class** type_info() {
            static app::AsyncHelpers__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncHelpers__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncHelpers__Class* get_class() {
            return il2cpp::get_class<app::AsyncHelpers__Class>(type_info(), "XGamingRuntime.Interop", "AsyncHelpers");
        }
        inline app::AsyncHelpers* create() {
            return il2cpp::create_object<app::AsyncHelpers>(get_class());
        }
    } // namespace AsyncHelpers
} // namespace app::classes::types
