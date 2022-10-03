#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkTriangleArray {
        namespace {
            app::AkTriangleArray__Class* type_info_ref = nullptr;
        }
        app::AkTriangleArray__Class** type_info = &type_info_ref;
        inline app::AkTriangleArray__Class* get_class() {
            return il2cpp::get_class<app::AkTriangleArray__Class>(type_info, "", "AkTriangleArray");
        }
        inline app::AkTriangleArray* create() {
            return il2cpp::create_object<app::AkTriangleArray>(get_class());
        }
    } // namespace AkTriangleArray
} // namespace app::classes::types
