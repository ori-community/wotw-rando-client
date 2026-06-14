#pragma once
#include <Modloader/app/structs/SerializationErrorCallback__Array.h>
#include <Modloader/app/structs/SerializationErrorCallback__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationErrorCallback__Array {
        inline app::SerializationErrorCallback__Array__Class** type_info() {
            static app::SerializationErrorCallback__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SerializationErrorCallback__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SerializationErrorCallback__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializationErrorCallback__Array__Class>(type_info(), "Newtonsoft.Json.Serialization", "SerializationErrorCallback[]");
        }
        inline app::SerializationErrorCallback__Array* create() {
            return il2cpp::create_object<app::SerializationErrorCallback__Array>(get_class());
        }
    } // namespace SerializationErrorCallback__Array
} // namespace app::classes::types
