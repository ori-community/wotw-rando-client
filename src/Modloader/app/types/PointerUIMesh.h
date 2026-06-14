#pragma once
#include <Modloader/app/structs/PointerUIMesh.h>
#include <Modloader/app/structs/PointerUIMesh__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointerUIMesh {
        inline app::PointerUIMesh__Class** type_info() {
            static app::PointerUIMesh__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PointerUIMesh__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PointerUIMesh__Class* get_class() {
            return il2cpp::get_class<app::PointerUIMesh__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "PointerUIMesh");
        }
        inline app::PointerUIMesh* create() {
            return il2cpp::create_object<app::PointerUIMesh>(get_class());
        }
    } // namespace PointerUIMesh
} // namespace app::classes::types
