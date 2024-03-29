#pragma once
#include <Modloader/app/structs/SerializableUberShaderWrapper.h>
#include <Modloader/app/structs/SerializableUberShaderWrapper__Array.h>
#include <Modloader/app/structs/SerializableUberShaderWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializableUberShaderWrapper {
        inline app::SerializableUberShaderWrapper__Class** type_info() {
            static app::SerializableUberShaderWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializableUberShaderWrapper__Class**)(modloader::win::memory::resolve_rva(0x047128F8));
            }
            return cache;
        }
        inline app::SerializableUberShaderWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializableUberShaderWrapper__Class>(type_info(), "Moon.ArtOptimization", "SerializableUberShaderWrapper");
        }
        inline app::SerializableUberShaderWrapper* create() {
            return il2cpp::create_object<app::SerializableUberShaderWrapper>(get_class());
        }
        inline app::SerializableUberShaderWrapper__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializableUberShaderWrapper__Array>(get_class(), size);
        }
        inline app::SerializableUberShaderWrapper__Array* create_array(const std::vector<app::SerializableUberShaderWrapper*>& items) {
            return il2cpp::array_new<app::SerializableUberShaderWrapper__Array>(get_class(), items);
        }
    } // namespace SerializableUberShaderWrapper
} // namespace app::classes::types
