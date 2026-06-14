#pragma once
#include <Modloader/app/structs/IDeserializationCallback__Array.h>
#include <Modloader/app/structs/IDeserializationCallback__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDeserializationCallback__Array {
        inline app::IDeserializationCallback__Array__Class** type_info() {
            static app::IDeserializationCallback__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDeserializationCallback__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDeserializationCallback__Array__Class* get_class() {
            return il2cpp::get_class<app::IDeserializationCallback__Array__Class>(type_info(), "System.Runtime.Serialization", "IDeserializationCallback[]");
        }
        inline app::IDeserializationCallback__Array* create() {
            return il2cpp::create_object<app::IDeserializationCallback__Array>(get_class());
        }
    } // namespace IDeserializationCallback__Array
} // namespace app::classes::types
