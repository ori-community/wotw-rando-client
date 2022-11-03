#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CapsuleShapeCopier {
        namespace {
            inline app::CapsuleShapeCopier__Class* type_info_ref = nullptr;
        }
        inline app::CapsuleShapeCopier__Class** type_info = &type_info_ref;
        inline app::CapsuleShapeCopier__Class* get_class() {
            return il2cpp::get_class<app::CapsuleShapeCopier__Class>(type_info, "", "CapsuleShapeCopier");
        }
        inline app::CapsuleShapeCopier* create() {
            return il2cpp::create_object<app::CapsuleShapeCopier>(get_class());
        }
    } // namespace CapsuleShapeCopier
} // namespace app::classes::types
