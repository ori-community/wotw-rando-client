#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkinningEdge {
        namespace {
            inline app::SkinningEdge__Class* type_info_ref = nullptr;
        }
        inline app::SkinningEdge__Class** type_info = &type_info_ref;
        inline app::SkinningEdge__Class* get_class() {
            return il2cpp::get_class<app::SkinningEdge__Class>(type_info, "", "SkinningEdge");
        }
        inline app::SkinningEdge* create() {
            return il2cpp::create_object<app::SkinningEdge>(get_class());
        }
    } // namespace SkinningEdge
} // namespace app::classes::types
