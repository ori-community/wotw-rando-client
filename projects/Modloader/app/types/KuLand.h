#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuLand__Class.h>
#include <Modloader/app/structs/KuLand.h>

namespace app::classes::types {
    namespace KuLand {
        namespace {
            inline app::KuLand__Class* type_info_ref = nullptr;
        }
        inline app::KuLand__Class** type_info = &type_info_ref;
        inline app::KuLand__Class* get_class() {
            return il2cpp::get_class<app::KuLand__Class>(type_info, "", "KuLand");
        }
        inline app::KuLand* create() {
            return il2cpp::create_object<app::KuLand>(get_class());
        }
    } // namespace KuLand
} // namespace app::classes::types
