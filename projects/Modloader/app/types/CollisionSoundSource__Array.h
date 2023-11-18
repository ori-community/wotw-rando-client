#pragma once
#include <Modloader/app/structs/CollisionSoundSource__Array.h>
#include <Modloader/app/structs/CollisionSoundSource__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionSoundSource__Array {
        inline app::CollisionSoundSource__Array__Class** type_info() {
            static app::CollisionSoundSource__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionSoundSource__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionSoundSource__Array__Class* get_class() {
            return il2cpp::get_class<app::CollisionSoundSource__Array__Class>(type_info(), "", "CollisionSoundSource[]");
        }
        inline app::CollisionSoundSource__Array* create() {
            return il2cpp::create_object<app::CollisionSoundSource__Array>(get_class());
        }
    } // namespace CollisionSoundSource__Array
} // namespace app::classes::types
