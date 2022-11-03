#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderCustomMesh {
        namespace {
            inline app::UberShaderCustomMesh__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderCustomMesh__Class** type_info = &type_info_ref;
        inline app::UberShaderCustomMesh__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomMesh__Class>(type_info, "", "UberShaderCustomMesh");
        }
        inline app::UberShaderCustomMesh* create() {
            return il2cpp::create_object<app::UberShaderCustomMesh>(get_class());
        }
    } // namespace UberShaderCustomMesh
} // namespace app::classes::types
