#pragma once
#include <Modloader/app/structs/CancellationCallbackInfo__Array.h>
#include <Modloader/app/structs/CancellationCallbackInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancellationCallbackInfo__Array {
        inline app::CancellationCallbackInfo__Array__Class** type_info() {
            static app::CancellationCallbackInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CancellationCallbackInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CancellationCallbackInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::CancellationCallbackInfo__Array__Class>(type_info(), "System.Threading", "CancellationCallbackInfo[]");
        }
        inline app::CancellationCallbackInfo__Array* create() {
            return il2cpp::create_object<app::CancellationCallbackInfo__Array>(get_class());
        }
    } // namespace CancellationCallbackInfo__Array
} // namespace app::classes::types
