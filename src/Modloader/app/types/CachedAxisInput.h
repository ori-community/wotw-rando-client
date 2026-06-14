#pragma once
#include <Modloader/app/structs/CachedAxisInput.h>
#include <Modloader/app/structs/CachedAxisInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CachedAxisInput {
        inline app::CachedAxisInput__Class** type_info() {
            static app::CachedAxisInput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CachedAxisInput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CachedAxisInput__Class* get_class() {
            return il2cpp::get_class<app::CachedAxisInput__Class>(type_info(), "SmartInput", "CachedAxisInput");
        }
        inline app::CachedAxisInput* create() {
            return il2cpp::create_object<app::CachedAxisInput>(get_class());
        }
    } // namespace CachedAxisInput
} // namespace app::classes::types
