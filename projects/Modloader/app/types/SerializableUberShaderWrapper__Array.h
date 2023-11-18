#pragma once
#include <Modloader/app/structs/SerializableUberShaderWrapper__Array.h>
#include <Modloader/app/structs/SerializableUberShaderWrapper__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializableUberShaderWrapper__Array {
        inline app::SerializableUberShaderWrapper__Array__Class** type_info() {
            static app::SerializableUberShaderWrapper__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SerializableUberShaderWrapper__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SerializableUberShaderWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializableUberShaderWrapper__Array__Class>(type_info(), "Moon.ArtOptimization", "SerializableUberShaderWrapper[]");
        }
        inline app::SerializableUberShaderWrapper__Array* create() {
            return il2cpp::create_object<app::SerializableUberShaderWrapper__Array>(get_class());
        }
    } // namespace SerializableUberShaderWrapper__Array
} // namespace app::classes::types
