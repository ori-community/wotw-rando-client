#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuFall__Class.h>
#include <Modloader/app/structs/KuFall.h>

namespace app::classes::types {
    namespace KuFall {
        namespace {
            inline app::KuFall__Class* type_info_ref = nullptr;
        }
        inline app::KuFall__Class** type_info = &type_info_ref;
        inline app::KuFall__Class* get_class() {
            return il2cpp::get_class<app::KuFall__Class>(type_info, "", "KuFall");
        }
        inline app::KuFall* create() {
            return il2cpp::create_object<app::KuFall>(get_class());
        }
    } // namespace KuFall
} // namespace app::classes::types
