#pragma once
#include <Modloader/app/structs/VertexColorModifier.h>
#include <Modloader/app/structs/VertexColorModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VertexColorModifier {
        inline app::VertexColorModifier__Class** type_info() {
            static app::VertexColorModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VertexColorModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VertexColorModifier__Class* get_class() {
            return il2cpp::get_class<app::VertexColorModifier__Class>(type_info(), "", "VertexColorModifier");
        }
        inline app::VertexColorModifier* create() {
            return il2cpp::create_object<app::VertexColorModifier>(get_class());
        }
    } // namespace VertexColorModifier
} // namespace app::classes::types
