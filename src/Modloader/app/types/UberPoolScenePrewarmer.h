#pragma once
#include <Modloader/app/structs/UberPoolScenePrewarmer.h>
#include <Modloader/app/structs/UberPoolScenePrewarmer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolScenePrewarmer {
        inline app::UberPoolScenePrewarmer__Class** type_info() {
            static app::UberPoolScenePrewarmer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolScenePrewarmer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolScenePrewarmer__Class* get_class() {
            return il2cpp::get_class<app::UberPoolScenePrewarmer__Class>(type_info(), "Moon.pooling", "UberPoolScenePrewarmer");
        }
        inline app::UberPoolScenePrewarmer* create() {
            return il2cpp::create_object<app::UberPoolScenePrewarmer>(get_class());
        }
    } // namespace UberPoolScenePrewarmer
} // namespace app::classes::types
