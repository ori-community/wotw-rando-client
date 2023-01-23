#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuDash__Class.h>
#include <Modloader/app/structs/KuDash.h>

namespace app::classes::types {
    namespace KuDash {
        namespace {
            inline app::KuDash__Class* type_info_ref = nullptr;
        }
        inline app::KuDash__Class** type_info = &type_info_ref;
        inline app::KuDash__Class* get_class() {
            return il2cpp::get_class<app::KuDash__Class>(type_info, "", "KuDash");
        }
        inline app::KuDash* create() {
            return il2cpp::create_object<app::KuDash>(get_class());
        }
    } // namespace KuDash
} // namespace app::classes::types
