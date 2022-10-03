#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAcousticSurfaceArray {
        namespace {
            app::AkAcousticSurfaceArray__Class* type_info_ref = nullptr;
        }
        app::AkAcousticSurfaceArray__Class** type_info = &type_info_ref;
        inline app::AkAcousticSurfaceArray__Class* get_class() {
            return il2cpp::get_class<app::AkAcousticSurfaceArray__Class>(type_info, "", "AkAcousticSurfaceArray");
        }
        inline app::AkAcousticSurfaceArray* create() {
            return il2cpp::create_object<app::AkAcousticSurfaceArray>(get_class());
        }
    } // namespace AkAcousticSurfaceArray
} // namespace app::classes::types
