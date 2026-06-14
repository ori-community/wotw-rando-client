#pragma once
#include <Modloader/app/structs/LineMeshTextureTiler.h>
#include <Modloader/app/structs/LineMeshTextureTiler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LineMeshTextureTiler {
        inline app::LineMeshTextureTiler__Class** type_info() {
            static app::LineMeshTextureTiler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LineMeshTextureTiler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LineMeshTextureTiler__Class* get_class() {
            return il2cpp::get_class<app::LineMeshTextureTiler__Class>(type_info(), "", "LineMeshTextureTiler");
        }
        inline app::LineMeshTextureTiler* create() {
            return il2cpp::create_object<app::LineMeshTextureTiler>(get_class());
        }
    } // namespace LineMeshTextureTiler
} // namespace app::classes::types
