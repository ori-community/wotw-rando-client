#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuCrouch__Class.h>
#include <Modloader/app/structs/KuCrouch.h>

namespace app::classes::types {
    namespace KuCrouch {
        namespace {
            inline app::KuCrouch__Class* type_info_ref = nullptr;
        }
        inline app::KuCrouch__Class** type_info = &type_info_ref;
        inline app::KuCrouch__Class* get_class() {
            return il2cpp::get_class<app::KuCrouch__Class>(type_info, "", "KuCrouch");
        }
        inline app::KuCrouch* create() {
            return il2cpp::create_object<app::KuCrouch>(get_class());
        }
    } // namespace KuCrouch
} // namespace app::classes::types
