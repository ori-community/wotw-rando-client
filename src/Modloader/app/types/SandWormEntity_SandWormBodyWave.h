#pragma once
#include <Modloader/app/structs/SandWormEntity_SandWormBodyWave.h>
#include <Modloader/app/structs/SandWormEntity_SandWormBodyWave__Array.h>
#include <Modloader/app/structs/SandWormEntity_SandWormBodyWave__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_SandWormBodyWave {
        inline app::SandWormEntity_SandWormBodyWave__Class** type_info() {
            static app::SandWormEntity_SandWormBodyWave__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormEntity_SandWormBodyWave__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormEntity_SandWormBodyWave__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_SandWormBodyWave__Class>(type_info(), "", "SandWormEntity", "SandWormBodyWave");
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
