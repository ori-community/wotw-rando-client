#pragma once
#include <Modloader/app/structs/SerializableUberSaderModifierWrapper.h>
#include <Modloader/app/structs/SerializableUberSaderModifierWrapper__Array.h>
#include <Modloader/app/structs/SerializableUberSaderModifierWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializableUberSaderModifierWrapper {
        inline app::SerializableUberSaderModifierWrapper__Class** type_info() {
            static app::SerializableUberSaderModifierWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializableUberSaderModifierWrapper__Class**)(modloader::win::memory::resolve_rva(0x04729BD0));
            }
            return cache;
        }
        inline app::SerializableUberSaderModifierWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializableUberSaderModifierWrapper__Class>(type_info(), "Moon.ArtOptimization", "SerializableUberSaderModifierWrapper");
        }
        inline app::SerializableUberSaderModifierWrapper* create() {
            return il2cpp::create_object<app::SerializableUberSaderModifierWrapper>(get_class());
        }
        inline app::SerializableUberSaderModifierWrapper__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializableUberSaderModifierWrapper__Array>(get_class(), size);
        }
        inline app::SerializableUberSaderModifierWrapper__Array* create_array(const std::vector<app::SerializableUberSaderModifierWrapper*>& items) {
            return il2cpp::array_new<app::SerializableUberSaderModifierWrapper__Array>(get_class(), items);
        }
    } // namespace SerializableUberSaderModifierWrapper
} // namespace app::classes::types
