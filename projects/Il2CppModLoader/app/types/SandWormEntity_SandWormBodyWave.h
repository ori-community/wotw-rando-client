#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_SandWormBodyWave {
        namespace {
            app::SandWormEntity_SandWormBodyWave__Class* type_info_ref = nullptr;
        }
        app::SandWormEntity_SandWormBodyWave__Class** type_info = &type_info_ref;
        inline app::SandWormEntity_SandWormBodyWave__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_SandWormBodyWave__Class>(type_info, "", "SandWormEntity", "SandWormBodyWave");
        }
        inline app::SandWormEntity_SandWormBodyWave* create() {
            return il2cpp::create_object<app::SandWormEntity_SandWormBodyWave>(get_class());
        }
        inline app::SandWormEntity_SandWormBodyWave__Array* create_array(int size) {
            return il2cpp::array_new<app::SandWormEntity_SandWormBodyWave__Array>(get_class(), size);
        }
        inline app::SandWormEntity_SandWormBodyWave__Array* create_array(const std::vector<app::SandWormEntity_SandWormBodyWave*>& items) {
            return il2cpp::array_new<app::SandWormEntity_SandWormBodyWave__Array>(get_class(), items);
        }
    } // namespace SandWormEntity_SandWormBodyWave
} // namespace app::classes::types
