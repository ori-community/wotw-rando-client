#pragma once
#include <Modloader/app/structs/ThreadSafeAttribute.h>
#include <Modloader/app/structs/ThreadSafeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadSafeAttribute {
        inline app::ThreadSafeAttribute__Class** type_info() {
            static app::ThreadSafeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThreadSafeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThreadSafeAttribute__Class* get_class() {
            return il2cpp::get_class<app::ThreadSafeAttribute__Class>(type_info(), "UnityEngine.Bindings", "ThreadSafeAttribute");
        }
        inline app::ThreadSafeAttribute* create() {
            return il2cpp::create_object<app::ThreadSafeAttribute>(get_class());
        }
    } // namespace ThreadSafeAttribute
} // namespace app::classes::types
