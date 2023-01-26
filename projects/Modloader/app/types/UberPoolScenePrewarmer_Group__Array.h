#pragma once
#include <Modloader/app/structs/UberPoolScenePrewarmer_Group__Array.h>
#include <Modloader/app/structs/UberPoolScenePrewarmer_Group__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolScenePrewarmer_Group__Array {
        inline app::UberPoolScenePrewarmer_Group__Array__Class** type_info() {
            static app::UberPoolScenePrewarmer_Group__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolScenePrewarmer_Group__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolScenePrewarmer_Group__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPoolScenePrewarmer_Group__Array__Class>(type_info(), "Moon.pooling", "UberPoolScenePrewarmer+Group[]");
        }
        inline app::UberPoolScenePrewarmer_Group__Array* create() {
            return il2cpp::create_object<app::UberPoolScenePrewarmer_Group__Array>(get_class());
        }
    } // namespace UberPoolScenePrewarmer_Group__Array
} // namespace app::classes::types
