#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayCharacterAnimation3D_EventToAction__Array__Class.h>
#include <Modloader/app/structs/PlayCharacterAnimation3D_EventToAction__Array.h>

namespace app::classes::types {
    namespace PlayCharacterAnimation3D_EventToAction__Array {
        namespace {
            inline app::PlayCharacterAnimation3D_EventToAction__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayCharacterAnimation3D_EventToAction__Array__Class** type_info = &type_info_ref;
        inline app::PlayCharacterAnimation3D_EventToAction__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayCharacterAnimation3D_EventToAction__Array__Class>(type_info, "", "PlayCharacterAnimation3D+EventToAction[]");
        }
        inline app::PlayCharacterAnimation3D_EventToAction__Array* create() {
            return il2cpp::create_object<app::PlayCharacterAnimation3D_EventToAction__Array>(get_class());
        }
    } // namespace PlayCharacterAnimation3D_EventToAction__Array
} // namespace app::classes::types
