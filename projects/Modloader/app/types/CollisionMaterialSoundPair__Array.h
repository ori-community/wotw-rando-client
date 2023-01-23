#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollisionMaterialSoundPair__Array__Class.h>
#include <Modloader/app/structs/CollisionMaterialSoundPair__Array.h>

namespace app::classes::types {
    namespace CollisionMaterialSoundPair__Array {
        namespace {
            inline app::CollisionMaterialSoundPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::CollisionMaterialSoundPair__Array__Class** type_info = &type_info_ref;
        inline app::CollisionMaterialSoundPair__Array__Class* get_class() {
            return il2cpp::get_class<app::CollisionMaterialSoundPair__Array__Class>(type_info, "", "CollisionMaterialSoundPair[]");
        }
        inline app::CollisionMaterialSoundPair__Array* create() {
            return il2cpp::create_object<app::CollisionMaterialSoundPair__Array>(get_class());
        }
    } // namespace CollisionMaterialSoundPair__Array
} // namespace app::classes::types
