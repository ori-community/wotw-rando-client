#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IgnoreCollision__Class.h>
#include <Modloader/app/structs/IgnoreCollision.h>

namespace app::classes::types {
    namespace IgnoreCollision {
        namespace {
            inline app::IgnoreCollision__Class* type_info_ref = nullptr;
        }
        inline app::IgnoreCollision__Class** type_info = &type_info_ref;
        inline app::IgnoreCollision__Class* get_class() {
            return il2cpp::get_class<app::IgnoreCollision__Class>(type_info, "", "IgnoreCollision");
        }
        inline app::IgnoreCollision* create() {
            return il2cpp::create_object<app::IgnoreCollision>(get_class());
        }
    } // namespace IgnoreCollision
} // namespace app::classes::types
