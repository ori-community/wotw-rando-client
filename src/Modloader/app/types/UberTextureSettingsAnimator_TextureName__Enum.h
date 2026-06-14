#pragma once
#include <Modloader/app/structs/UberTextureSettingsAnimator_TextureName__Enum.h>
#include <Modloader/app/structs/UberTextureSettingsAnimator_TextureName__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberTextureSettingsAnimator_TextureName__Enum {
        inline app::UberTextureSettingsAnimator_TextureName__Enum__Class** type_info() {
            static app::UberTextureSettingsAnimator_TextureName__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberTextureSettingsAnimator_TextureName__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberTextureSettingsAnimator_TextureName__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberTextureSettingsAnimator_TextureName__Enum__Class>(type_info(), "", "UberTextureSettingsAnimator", "TextureName");
        }
        inline app::UberTextureSettingsAnimator_TextureName__Enum* create() {
            return il2cpp::create_object<app::UberTextureSettingsAnimator_TextureName__Enum>(get_class());
        }
    } // namespace UberTextureSettingsAnimator_TextureName__Enum
} // namespace app::classes::types
