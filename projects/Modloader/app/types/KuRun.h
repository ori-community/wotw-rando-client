#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuRun__Class.h>
#include <Modloader/app/structs/KuRun.h>

namespace app::classes::types {
    namespace KuRun {
        namespace {
            inline app::KuRun__Class* type_info_ref = nullptr;
        }
        inline app::KuRun__Class** type_info = &type_info_ref;
        inline app::KuRun__Class* get_class() {
            return il2cpp::get_class<app::KuRun__Class>(type_info, "", "KuRun");
        }
        inline app::KuRun* create() {
            return il2cpp::create_object<app::KuRun>(get_class());
        }
    } // namespace KuRun
} // namespace app::classes::types
