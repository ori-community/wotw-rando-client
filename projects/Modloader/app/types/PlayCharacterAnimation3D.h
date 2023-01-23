#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayCharacterAnimation3D__Class.h>
#include <Modloader/app/structs/PlayCharacterAnimation3D.h>

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
