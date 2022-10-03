#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionSoundSource {
        namespace {
            app::CollisionSoundSource__Class* type_info_ref = nullptr;
        }
        app::CollisionSoundSource__Class** type_info = &type_info_ref;
        inline app::CollisionSoundSource__Class* get_class() {
            return il2cpp::get_class<app::CollisionSoundSource__Class>(type_info, "", "CollisionSoundSource");
        }
        inline app::CollisionSoundSource* create() {
            return il2cpp::create_object<app::CollisionSoundSource>(get_class());
        }
        inline app::CollisionSoundSource__Array* create_array(int size) {
            return il2cpp::array_new<app::CollisionSoundSource__Array>(get_class(), size);
        }
    } // namespace CollisionSoundSource
} // namespace app::classes::types
