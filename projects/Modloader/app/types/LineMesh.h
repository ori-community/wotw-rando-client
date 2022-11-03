#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LineMesh {
        namespace {
            inline app::LineMesh__Class* type_info_ref = nullptr;
        }
        inline app::LineMesh__Class** type_info = &type_info_ref;
        inline app::LineMesh__Class* get_class() {
            return il2cpp::get_class<app::LineMesh__Class>(type_info, "", "LineMesh");
        }
        inline app::LineMesh* create() {
            return il2cpp::create_object<app::LineMesh>(get_class());
        }
    } // namespace LineMesh
} // namespace app::classes::types
