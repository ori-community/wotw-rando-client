#pragma once
#include <Modloader/app/structs/AkAcousticSurfaceArray.h>
#include <Modloader/app/structs/AkAcousticSurfaceArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAcousticSurfaceArray {
        inline app::AkAcousticSurfaceArray__Class** type_info() {
            static app::AkAcousticSurfaceArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkAcousticSurfaceArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkAcousticSurfaceArray__Class* get_class() {
            return il2cpp::get_class<app::AkAcousticSurfaceArray__Class>(type_info(), "", "AkAcousticSurfaceArray");
        }
        inline app::AkAcousticSurfaceArray* create() {
            return il2cpp::create_object<app::AkAcousticSurfaceArray>(get_class());
        }
    } // namespace AkAcousticSurfaceArray
} // namespace app::classes::types
