#pragma once
#include <Modloader/app/structs/ThreadAndSerializationSafeAttribute.h>
#include <Modloader/app/structs/ThreadAndSerializationSafeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadAndSerializationSafeAttribute {
        inline app::ThreadAndSerializationSafeAttribute__Class** type_info() {
            static app::ThreadAndSerializationSafeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThreadAndSerializationSafeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThreadAndSerializationSafeAttribute__Class* get_class() {
            return il2cpp::get_class<app::ThreadAndSerializationSafeAttribute__Class>(type_info(), "UnityEngine", "ThreadAndSerializationSafeAttribute");
        }
        inline app::ThreadAndSerializationSafeAttribute* create() {
            return il2cpp::create_object<app::ThreadAndSerializationSafeAttribute>(get_class());
        }
    } // namespace ThreadAndSerializationSafeAttribute
} // namespace app::classes::types
