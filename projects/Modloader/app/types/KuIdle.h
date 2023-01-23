#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuIdle__Class.h>
#include <Modloader/app/structs/KuIdle.h>

namespace app::classes::types {
    namespace KuIdle {
        namespace {
            inline app::KuIdle__Class* type_info_ref = nullptr;
        }
        inline app::KuIdle__Class** type_info = &type_info_ref;
        inline app::KuIdle__Class* get_class() {
            return il2cpp::get_class<app::KuIdle__Class>(type_info, "", "KuIdle");
        }
        inline app::KuIdle* create() {
            return il2cpp::create_object<app::KuIdle>(get_class());
        }
    } // namespace KuIdle
} // namespace app::classes::types
