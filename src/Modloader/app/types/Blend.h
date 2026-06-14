#pragma once
#include <Modloader/app/structs/Blend.h>
#include <Modloader/app/structs/Blend__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Blend {
        inline app::Blend__Class** type_info() {
            static app::Blend__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Blend__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Blend__Class* get_class() {
            return il2cpp::get_class<app::Blend__Class>(type_info(), "Colorful", "Blend");
        }
        inline app::Blend* create() {
            return il2cpp::create_object<app::Blend>(get_class());
        }
    } // namespace Blend
} // namespace app::classes::types
