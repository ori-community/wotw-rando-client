#pragma once
#include <Modloader/app/structs/CollisionMaterialSoundPair__Array.h>
#include <Modloader/app/structs/CollisionMaterialSoundPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionMaterialSoundPair__Array {
        inline app::CollisionMaterialSoundPair__Array__Class** type_info() {
            static app::CollisionMaterialSoundPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionMaterialSoundPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionMaterialSoundPair__Array__Class* get_class() {
            return il2cpp::get_class<app::CollisionMaterialSoundPair__Array__Class>(type_info(), "", "CollisionMaterialSoundPair[]");
        }
        inline app::CollisionMaterialSoundPair__Array* create() {
            return il2cpp::create_object<app::CollisionMaterialSoundPair__Array>(get_class());
        }
    } // namespace CollisionMaterialSoundPair__Array
} // namespace app::classes::types
