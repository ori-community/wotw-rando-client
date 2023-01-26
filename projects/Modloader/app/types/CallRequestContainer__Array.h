#pragma once
#include <Modloader/app/structs/CallRequestContainer__Array.h>
#include <Modloader/app/structs/CallRequestContainer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallRequestContainer__Array {
        inline app::CallRequestContainer__Array__Class** type_info() {
            static app::CallRequestContainer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallRequestContainer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallRequestContainer__Array__Class* get_class() {
            return il2cpp::get_class<app::CallRequestContainer__Array__Class>(type_info(), "PlayFab.Internal", "CallRequestContainer[]");
        }
        inline app::CallRequestContainer__Array* create() {
            return il2cpp::create_object<app::CallRequestContainer__Array>(get_class());
        }
    } // namespace CallRequestContainer__Array
} // namespace app::classes::types
