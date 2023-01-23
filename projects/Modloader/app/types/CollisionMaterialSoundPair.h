#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollisionMaterialSoundPair__Class.h>
#include <Modloader/app/structs/CollisionMaterialSoundPair.h>
#include <Modloader/app/structs/CollisionMaterialSoundPair__Array.h>

namespace app::classes::types {
    namespace CollisionMaterialSoundPair {
        namespace {
            inline app::CollisionMaterialSoundPair__Class* type_info_ref = nullptr;
        }
        inline app::CollisionMaterialSoundPair__Class** type_info = &type_info_ref;
        inline app::CollisionMaterialSoundPair__Class* get_class() {
            return il2cpp::get_class<app::CollisionMaterialSoundPair__Class>(type_info, "", "CollisionMaterialSoundPair");
        }
        inline app::CollisionMaterialSoundPair* create() {
            return il2cpp::create_object<app::CollisionMaterialSoundPair>(get_class());
        }
        inline app::CollisionMaterialSoundPair__Array* create_array(int size) {
            return il2cpp::array_new<app::CollisionMaterialSoundPair__Array>(get_class(), size);
        }
        inline app::CollisionMaterialSoundPair__Array* create_array(const std::vector<app::CollisionMaterialSoundPair*>& items) {
            return il2cpp::array_new<app::CollisionMaterialSoundPair__Array>(get_class(), items);
        }
    } // namespace CollisionMaterialSoundPair
} // namespace app::classes::types
