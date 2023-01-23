#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuPushWall__Class.h>
#include <Modloader/app/structs/KuPushWall.h>

namespace app::classes::types {
    namespace KuPushWall {
        namespace {
            inline app::KuPushWall__Class* type_info_ref = nullptr;
        }
        inline app::KuPushWall__Class** type_info = &type_info_ref;
        inline app::KuPushWall__Class* get_class() {
            return il2cpp::get_class<app::KuPushWall__Class>(type_info, "", "KuPushWall");
        }
        inline app::KuPushWall* create() {
            return il2cpp::create_object<app::KuPushWall>(get_class());
        }
    } // namespace KuPushWall
} // namespace app::classes::types
