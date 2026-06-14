#pragma once
#include <Modloader/app/structs/SerializableUberSaderModifierWrapper__Array.h>
#include <Modloader/app/structs/SerializableUberSaderModifierWrapper__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializableUberSaderModifierWrapper__Array {
        inline app::SerializableUberSaderModifierWrapper__Array__Class** type_info() {
            static app::SerializableUberSaderModifierWrapper__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SerializableUberSaderModifierWrapper__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SerializableUberSaderModifierWrapper__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializableUberSaderModifierWrapper__Array__Class>(type_info(), "Moon.ArtOptimization", "SerializableUberSaderModifierWrapper[]");
        }
        inline app::SerializableUberSaderModifierWrapper__Array* create() {
            return il2cpp::create_object<app::SerializableUberSaderModifierWrapper__Array>(get_class());
        }
    } // namespace SerializableUberSaderModifierWrapper__Array
} // namespace app::classes::types
