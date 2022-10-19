#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayCharacterAnimation3D {
        namespace {
            inline app::PlayCharacterAnimation3D__Class* type_info_ref = nullptr;
        }
        inline app::PlayCharacterAnimation3D__Class** type_info = &type_info_ref;
        inline app::PlayCharacterAnimation3D__Class* get_class() {
            return il2cpp::get_class<app::PlayCharacterAnimation3D__Class>(type_info, "", "PlayCharacterAnimation3D");
        }
        inline app::PlayCharacterAnimation3D* create() {
            return il2cpp::create_object<app::PlayCharacterAnimation3D>(get_class());
        }
    } // namespace PlayCharacterAnimation3D
} // namespace app::classes::types
