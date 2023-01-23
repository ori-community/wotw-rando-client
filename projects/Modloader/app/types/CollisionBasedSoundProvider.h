#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollisionBasedSoundProvider__Class.h>
#include <Modloader/app/structs/CollisionBasedSoundProvider.h>

namespace app::classes::types {
    namespace CollisionBasedSoundProvider {
        namespace {
            inline app::CollisionBasedSoundProvider__Class* type_info_ref = nullptr;
        }
        inline app::CollisionBasedSoundProvider__Class** type_info = &type_info_ref;
        inline app::CollisionBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::CollisionBasedSoundProvider__Class>(type_info, "", "CollisionBasedSoundProvider");
        }
        inline app::CollisionBasedSoundProvider* create() {
            return il2cpp::create_object<app::CollisionBasedSoundProvider>(get_class());
        }
    } // namespace CollisionBasedSoundProvider
} // namespace app::classes::types
