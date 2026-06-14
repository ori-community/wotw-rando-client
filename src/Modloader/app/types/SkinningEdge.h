#pragma once
#include <Modloader/app/structs/SkinningEdge.h>
#include <Modloader/app/structs/SkinningEdge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkinningEdge {
        inline app::SkinningEdge__Class** type_info() {
            static app::SkinningEdge__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkinningEdge__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkinningEdge__Class* get_class() {
            return il2cpp::get_class<app::SkinningEdge__Class>(type_info(), "", "SkinningEdge");
        }
        inline app::SkinningEdge* create() {
            return il2cpp::create_object<app::SkinningEdge>(get_class());
        }
    } // namespace SkinningEdge
} // namespace app::classes::types
