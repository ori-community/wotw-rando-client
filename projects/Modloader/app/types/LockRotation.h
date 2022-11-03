#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LockRotation {
        namespace {
            inline app::LockRotation__Class* type_info_ref = nullptr;
        }
        inline app::LockRotation__Class** type_info = &type_info_ref;
        inline app::LockRotation__Class* get_class() {
            return il2cpp::get_class<app::LockRotation__Class>(type_info, "", "LockRotation");
        }
        inline app::LockRotation* create() {
            return il2cpp::create_object<app::LockRotation>(get_class());
        }
    } // namespace LockRotation
} // namespace app::classes::types
