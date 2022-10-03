#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionBasedSoundProvider {
        namespace {
            app::CollisionBasedSoundProvider__Class* type_info_ref = nullptr;
        }
        app::CollisionBasedSoundProvider__Class** type_info = &type_info_ref;
        inline app::CollisionBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::CollisionBasedSoundProvider__Class>(type_info, "", "CollisionBasedSoundProvider");
        }
        inline app::CollisionBasedSoundProvider* create() {
            return il2cpp::create_object<app::CollisionBasedSoundProvider>(get_class());
        }
    } // namespace CollisionBasedSoundProvider
} // namespace app::classes::types
