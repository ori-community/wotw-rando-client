#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DropSlugAlertBehaviour {
        namespace {
            inline app::DropSlugAlertBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::DropSlugAlertBehaviour__Class** type_info = &type_info_ref;
        inline app::DropSlugAlertBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugAlertBehaviour__Class>(type_info, "", "DropSlugAlertBehaviour");
        }
        inline app::DropSlugAlertBehaviour* create() {
            return il2cpp::create_object<app::DropSlugAlertBehaviour>(get_class());
        }
    } // namespace DropSlugAlertBehaviour
} // namespace app::classes::types
