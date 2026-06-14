#pragma once
#include <Modloader/app/structs/SerializationCallback.h>
#include <Modloader/app/structs/SerializationCallback__Array.h>
#include <Modloader/app/structs/SerializationCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationCallback {
        inline app::SerializationCallback__Class** type_info() {
            static app::SerializationCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializationCallback__Class**)(modloader::win::memory::resolve_rva(0x047301F0));
            }
            return cache;
        }
        inline app::SerializationCallback__Class* get_class() {
            return il2cpp::get_class<app::SerializationCallback__Class>(type_info(), "Newtonsoft.Json.Serialization", "SerializationCallback");
        }
        inline app::SerializationCallback* create() {
            return il2cpp::create_object<app::SerializationCallback>(get_class());
        }
        inline app::SerializationCallback__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializationCallback__Array>(get_class(), size);
        }
        inline app::SerializationCallback__Array* create_array(const std::vector<app::SerializationCallback*>& items) {
            return il2cpp::array_new<app::SerializationCallback__Array>(get_class(), items);
        }
    } // namespace SerializationCallback
} // namespace app::classes::types
