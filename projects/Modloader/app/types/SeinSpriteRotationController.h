#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpriteRotationController {
        namespace {
            inline app::SeinSpriteRotationController__Class* type_info_ref = nullptr;
        }
        inline app::SeinSpriteRotationController__Class** type_info = &type_info_ref;
        inline app::SeinSpriteRotationController__Class* get_class() {
            return il2cpp::get_class<app::SeinSpriteRotationController__Class>(type_info, "", "SeinSpriteRotationController");
        }
        inline app::SeinSpriteRotationController* create() {
            return il2cpp::create_object<app::SeinSpriteRotationController>(get_class());
        }
    } // namespace SeinSpriteRotationController
} // namespace app::classes::types
