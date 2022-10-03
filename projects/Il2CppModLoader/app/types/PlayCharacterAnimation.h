#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayCharacterAnimation {
        namespace {
            app::PlayCharacterAnimation__Class* type_info_ref = nullptr;
        }
        app::PlayCharacterAnimation__Class** type_info = &type_info_ref;
        inline app::PlayCharacterAnimation__Class* get_class() {
            return il2cpp::get_class<app::PlayCharacterAnimation__Class>(type_info, "", "PlayCharacterAnimation");
        }
        inline app::PlayCharacterAnimation* create() {
            return il2cpp::create_object<app::PlayCharacterAnimation>(get_class());
        }
    } // namespace PlayCharacterAnimation
} // namespace app::classes::types
