#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NaruSpriteRotationController {
        namespace {
            inline app::NaruSpriteRotationController__Class* type_info_ref = nullptr;
        }
        inline app::NaruSpriteRotationController__Class** type_info = &type_info_ref;
        inline app::NaruSpriteRotationController__Class* get_class() {
            return il2cpp::get_class<app::NaruSpriteRotationController__Class>(type_info, "", "NaruSpriteRotationController");
        }
        inline app::NaruSpriteRotationController* create() {
            return il2cpp::create_object<app::NaruSpriteRotationController>(get_class());
        }
    } // namespace NaruSpriteRotationController
} // namespace app::classes::types
