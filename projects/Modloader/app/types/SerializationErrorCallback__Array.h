#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationErrorCallback__Array {
        namespace {
            inline app::SerializationErrorCallback__Array__Class* type_info_ref = nullptr;
        }
        inline app::SerializationErrorCallback__Array__Class** type_info = &type_info_ref;
        inline app::SerializationErrorCallback__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializationErrorCallback__Array__Class>(type_info, "Newtonsoft.Json.Serialization", "SerializationErrorCallback[]");
        }
        inline app::SerializationErrorCallback__Array* create() {
            return il2cpp::create_object<app::SerializationErrorCallback__Array>(get_class());
        }
    } // namespace SerializationErrorCallback__Array
} // namespace app::classes::types
