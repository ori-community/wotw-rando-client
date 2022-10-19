#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LineMeshTextureTiler {
        namespace {
            inline app::LineMeshTextureTiler__Class* type_info_ref = nullptr;
        }
        inline app::LineMeshTextureTiler__Class** type_info = &type_info_ref;
        inline app::LineMeshTextureTiler__Class* get_class() {
            return il2cpp::get_class<app::LineMeshTextureTiler__Class>(type_info, "", "LineMeshTextureTiler");
        }
        inline app::LineMeshTextureTiler* create() {
            return il2cpp::create_object<app::LineMeshTextureTiler>(get_class());
        }
    } // namespace LineMeshTextureTiler
} // namespace app::classes::types
