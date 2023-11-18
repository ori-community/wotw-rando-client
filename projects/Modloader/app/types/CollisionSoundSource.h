#pragma once
#include <Modloader/app/structs/CollisionSoundSource.h>
#include <Modloader/app/structs/CollisionSoundSource__Array.h>
#include <Modloader/app/structs/CollisionSoundSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionSoundSource {
        inline app::CollisionSoundSource__Class** type_info() {
            static app::CollisionSoundSource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionSoundSource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionSoundSource__Class* get_class() {
            return il2cpp::get_class<app::CollisionSoundSource__Class>(type_info(), "", "CollisionSoundSource");
        }
        inline app::CollisionSoundSource* create() {
            return il2cpp::create_object<app::CollisionSoundSource>(get_class());
        }
        inline app::CollisionSoundSource__Array* create_array(int size) {
            return il2cpp::array_new<app::CollisionSoundSource__Array>(get_class(), size);
        }
        inline app::CollisionSoundSource__Array* create_array(const std::vector<app::CollisionSoundSource*>& items) {
            return il2cpp::array_new<app::CollisionSoundSource__Array>(get_class(), items);
        }
    } // namespace CollisionSoundSource
} // namespace app::classes::types
