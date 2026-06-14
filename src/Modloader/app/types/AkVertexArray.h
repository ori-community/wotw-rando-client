#pragma once
#include <Modloader/app/structs/AkVertexArray.h>
#include <Modloader/app/structs/AkVertexArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkVertexArray {
        inline app::AkVertexArray__Class** type_info() {
            static app::AkVertexArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkVertexArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkVertexArray__Class* get_class() {
            return il2cpp::get_class<app::AkVertexArray__Class>(type_info(), "", "AkVertexArray");
        }
        inline app::AkVertexArray* create() {
            return il2cpp::create_object<app::AkVertexArray>(get_class());
        }
    } // namespace AkVertexArray
} // namespace app::classes::types
