#pragma once
#include <Modloader/app/structs/CollisionBasedSoundProvider.h>
#include <Modloader/app/structs/CollisionBasedSoundProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionBasedSoundProvider {
        inline app::CollisionBasedSoundProvider__Class** type_info() {
            static app::CollisionBasedSoundProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionBasedSoundProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::CollisionBasedSoundProvider__Class>(type_info(), "", "CollisionBasedSoundProvider");
        }
        inline app::CollisionBasedSoundProvider* create() {
            return il2cpp::create_object<app::CollisionBasedSoundProvider>(get_class());
        }
    } // namespace CollisionBasedSoundProvider
} // namespace app::classes::types
