#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardDescription {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritShardDescription__Class** type_info;
        inline app::SpiritShardDescription__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardDescription__Class>(type_info, "", "SpiritShardDescription");
        }
        inline app::SpiritShardDescription* create() {
            return il2cpp::create_object<app::SpiritShardDescription>(get_class());
        }
        inline app::SpiritShardDescription__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritShardDescription__Array>(get_class(), size);
        }
    } // namespace SpiritShardDescription
} // namespace app::classes::types
