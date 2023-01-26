#pragma once
#include <Modloader/app/structs/SerializationException.h>
#include <Modloader/app/structs/SerializationException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationException {
        inline app::SerializationException__Class** type_info() {
            static app::SerializationException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializationException__Class**)(modloader::win::memory::resolve_rva(0x0472B620));
            }
            return cache;
        }
        inline app::SerializationException__Class* get_class() {
            return il2cpp::get_class<app::SerializationException__Class>(type_info(), "System.Runtime.Serialization", "SerializationException");
        }
        inline app::SerializationException* create() {
            return il2cpp::create_object<app::SerializationException>(get_class());
        }
    } // namespace SerializationException
} // namespace app::classes::types
