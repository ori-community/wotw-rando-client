#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoftCollider__Class.h>
#include <Modloader/app/structs/SoftCollider.h>

namespace app::classes::types {
    namespace SoftCollider {
        namespace {
            inline app::SoftCollider__Class* type_info_ref = nullptr;
        }
        inline app::SoftCollider__Class** type_info = &type_info_ref;
        inline app::SoftCollider__Class* get_class() {
            return il2cpp::get_class<app::SoftCollider__Class>(type_info, "", "SoftCollider");
        }
        inline app::SoftCollider* create() {
            return il2cpp::create_object<app::SoftCollider>(get_class());
        }
    } // namespace SoftCollider
} // namespace app::classes::types
