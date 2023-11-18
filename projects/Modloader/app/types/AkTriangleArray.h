#pragma once
#include <Modloader/app/structs/AkTriangleArray.h>
#include <Modloader/app/structs/AkTriangleArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkTriangleArray {
        inline app::AkTriangleArray__Class** type_info() {
            static app::AkTriangleArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkTriangleArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkTriangleArray__Class* get_class() {
            return il2cpp::get_class<app::AkTriangleArray__Class>(type_info(), "", "AkTriangleArray");
        }
        inline app::AkTriangleArray* create() {
            return il2cpp::create_object<app::AkTriangleArray>(get_class());
        }
    } // namespace AkTriangleArray
} // namespace app::classes::types
