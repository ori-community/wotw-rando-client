#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayCharacterAnimation__Class.h>
#include <Modloader/app/structs/PlayCharacterAnimation.h>

namespace app::classes::types {
    namespace PlayCharacterAnimation {
        namespace {
            inline app::PlayCharacterAnimation__Class* type_info_ref = nullptr;
        }
        inline app::PlayCharacterAnimation__Class** type_info = &type_info_ref;
        inline app::PlayCharacterAnimation__Class* get_class() {
            return il2cpp::get_class<app::PlayCharacterAnimation__Class>(type_info, "", "PlayCharacterAnimation");
        }
        inline app::PlayCharacterAnimation* create() {
            return il2cpp::create_object<app::PlayCharacterAnimation>(get_class());
        }
    } // namespace PlayCharacterAnimation
} // namespace app::classes::types
