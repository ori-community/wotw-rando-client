#pragma once
#include <Modloader/app/structs/MetaballRenderer.h>
#include <Modloader/app/structs/MetaballRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MetaballRenderer {
        inline app::MetaballRenderer__Class** type_info() {
            static app::MetaballRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MetaballRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MetaballRenderer__Class* get_class() {
            return il2cpp::get_class<app::MetaballRenderer__Class>(type_info(), "Metaballs2D", "MetaballRenderer");
        }
        inline app::MetaballRenderer* create() {
            return il2cpp::create_object<app::MetaballRenderer>(get_class());
        }
    } // namespace MetaballRenderer
} // namespace app::classes::types
