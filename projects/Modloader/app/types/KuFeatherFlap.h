#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuFeatherFlap__Class.h>
#include <Modloader/app/structs/KuFeatherFlap.h>

namespace app::classes::types {
    namespace KuFeatherFlap {
        namespace {
            inline app::KuFeatherFlap__Class* type_info_ref = nullptr;
        }
        inline app::KuFeatherFlap__Class** type_info = &type_info_ref;
        inline app::KuFeatherFlap__Class* get_class() {
            return il2cpp::get_class<app::KuFeatherFlap__Class>(type_info, "", "KuFeatherFlap");
        }
        inline app::KuFeatherFlap* create() {
            return il2cpp::create_object<app::KuFeatherFlap>(get_class());
        }
    } // namespace KuFeatherFlap
} // namespace app::classes::types
