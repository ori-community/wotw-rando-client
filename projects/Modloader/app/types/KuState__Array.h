#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuState__Array__Class.h>
#include <Modloader/app/structs/KuState__Array.h>

namespace app::classes::types {
    namespace KuState__Array {
        namespace {
            inline app::KuState__Array__Class* type_info_ref = nullptr;
        }
        inline app::KuState__Array__Class** type_info = &type_info_ref;
        inline app::KuState__Array__Class* get_class() {
            return il2cpp::get_class<app::KuState__Array__Class>(type_info, "", "KuState[]");
        }
        inline app::KuState__Array* create() {
            return il2cpp::create_object<app::KuState__Array>(get_class());
        }
    } // namespace KuState__Array
} // namespace app::classes::types
