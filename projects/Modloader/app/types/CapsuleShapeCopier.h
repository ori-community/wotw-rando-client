#pragma once
#include <Modloader/app/structs/CapsuleShapeCopier.h>
#include <Modloader/app/structs/CapsuleShapeCopier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CapsuleShapeCopier {
        inline app::CapsuleShapeCopier__Class** type_info() {
            static app::CapsuleShapeCopier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CapsuleShapeCopier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CapsuleShapeCopier__Class* get_class() {
            return il2cpp::get_class<app::CapsuleShapeCopier__Class>(type_info(), "", "CapsuleShapeCopier");
        }
        inline app::CapsuleShapeCopier* create() {
            return il2cpp::create_object<app::CapsuleShapeCopier>(get_class());
        }
    } // namespace CapsuleShapeCopier
} // namespace app::classes::types
