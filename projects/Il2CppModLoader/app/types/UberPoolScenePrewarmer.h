#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolScenePrewarmer {
        namespace {
            app::UberPoolScenePrewarmer__Class* type_info_ref = nullptr;
        }
        app::UberPoolScenePrewarmer__Class** type_info = &type_info_ref;
        inline app::UberPoolScenePrewarmer__Class* get_class() {
            return il2cpp::get_class<app::UberPoolScenePrewarmer__Class>(type_info, "Moon.pooling", "UberPoolScenePrewarmer");
        }
        inline app::UberPoolScenePrewarmer* create() {
            return il2cpp::create_object<app::UberPoolScenePrewarmer>(get_class());
        }
    } // namespace UberPoolScenePrewarmer
} // namespace app::classes::types
