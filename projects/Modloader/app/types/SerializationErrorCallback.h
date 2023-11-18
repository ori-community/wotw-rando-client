#pragma once
#include <Modloader/app/structs/SerializationErrorCallback.h>
#include <Modloader/app/structs/SerializationErrorCallback__Array.h>
#include <Modloader/app/structs/SerializationErrorCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationErrorCallback {
        inline app::SerializationErrorCallback__Class** type_info() {
            static app::SerializationErrorCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializationErrorCallback__Class**)(modloader::win::memory::resolve_rva(0x047087C0));
            }
            return cache;
        }
        inline app::SerializationErrorCallback__Class* get_class() {
            return il2cpp::get_class<app::SerializationErrorCallback__Class>(type_info(), "Newtonsoft.Json.Serialization", "SerializationErrorCallback");
        }
        inline app::SerializationErrorCallback* create() {
            return il2cpp::create_object<app::SerializationErrorCallback>(get_class());
        }
        inline app::SerializationErrorCallback__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializationErrorCallback__Array>(get_class(), size);
        }
        inline app::SerializationErrorCallback__Array* create_array(const std::vector<app::SerializationErrorCallback*>& items) {
            return il2cpp::array_new<app::SerializationErrorCallback__Array>(get_class(), items);
        }
    } // namespace SerializationErrorCallback
} // namespace app::classes::types
