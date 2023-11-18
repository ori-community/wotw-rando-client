#pragma once
#include <Modloader/app/structs/ExcludeFromPresetAttribute.h>
#include <Modloader/app/structs/ExcludeFromPresetAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExcludeFromPresetAttribute {
        inline app::ExcludeFromPresetAttribute__Class** type_info() {
            static app::ExcludeFromPresetAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExcludeFromPresetAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExcludeFromPresetAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExcludeFromPresetAttribute__Class>(type_info(), "UnityEngine", "ExcludeFromPresetAttribute");
        }
        inline app::ExcludeFromPresetAttribute* create() {
            return il2cpp::create_object<app::ExcludeFromPresetAttribute>(get_class());
        }
    } // namespace ExcludeFromPresetAttribute
} // namespace app::classes::types
