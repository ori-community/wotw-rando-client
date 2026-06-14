#pragma once
#include <Modloader/app/structs/TextMesh.h>
#include <Modloader/app/structs/TextMesh__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMesh {
        inline app::TextMesh__Class** type_info() {
            static app::TextMesh__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextMesh__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextMesh__Class* get_class() {
            return il2cpp::get_class<app::TextMesh__Class>(type_info(), "UnityEngine", "TextMesh");
        }
        inline app::TextMesh* create() {
            return il2cpp::create_object<app::TextMesh>(get_class());
        }
    } // namespace TextMesh
} // namespace app::classes::types
