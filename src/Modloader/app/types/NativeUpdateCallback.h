#pragma once
#include <Modloader/app/structs/NativeUpdateCallback.h>
#include <Modloader/app/structs/NativeUpdateCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeUpdateCallback {
        inline app::NativeUpdateCallback__Class** type_info() {
            static app::NativeUpdateCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeUpdateCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeUpdateCallback__Class* get_class() {
            return il2cpp::get_class<app::NativeUpdateCallback__Class>(type_info(), "UnityEngineInternal.Input", "NativeUpdateCallback");
        }
        inline app::NativeUpdateCallback* create() {
            return il2cpp::create_object<app::NativeUpdateCallback>(get_class());
        }
    } // namespace NativeUpdateCallback
} // namespace app::classes::types
