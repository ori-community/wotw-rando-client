#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShieldCollision__Class.h>
#include <Modloader/app/structs/ShieldCollision.h>

namespace app::classes::types {
    namespace ShieldCollision {
        namespace {
            inline app::ShieldCollision__Class* type_info_ref = nullptr;
        }
        inline app::ShieldCollision__Class** type_info = &type_info_ref;
        inline app::ShieldCollision__Class* get_class() {
            return il2cpp::get_class<app::ShieldCollision__Class>(type_info, "", "ShieldCollision");
        }
        inline app::ShieldCollision* create() {
            return il2cpp::create_object<app::ShieldCollision>(get_class());
        }
    } // namespace ShieldCollision
} // namespace app::classes::types
