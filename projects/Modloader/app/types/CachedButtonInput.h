#pragma once
#include <Modloader/app/structs/CachedButtonInput.h>
#include <Modloader/app/structs/CachedButtonInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CachedButtonInput {
        inline app::CachedButtonInput__Class** type_info() {
            static app::CachedButtonInput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CachedButtonInput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CachedButtonInput__Class* get_class() {
            return il2cpp::get_class<app::CachedButtonInput__Class>(type_info(), "SmartInput", "CachedButtonInput");
        }
        inline app::CachedButtonInput* create() {
            return il2cpp::create_object<app::CachedButtonInput>(get_class());
        }
    } // namespace CachedButtonInput
} // namespace app::classes::types
