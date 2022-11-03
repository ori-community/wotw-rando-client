#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NoAllocHelpers {
        namespace {
            inline app::NoAllocHelpers__Class* type_info_ref = nullptr;
        }
        inline app::NoAllocHelpers__Class** type_info = &type_info_ref;
        inline app::NoAllocHelpers__Class* get_class() {
            return il2cpp::get_class<app::NoAllocHelpers__Class>(type_info, "UnityEngine", "NoAllocHelpers");
        }
        inline app::NoAllocHelpers* create() {
            return il2cpp::create_object<app::NoAllocHelpers>(get_class());
        }
    } // namespace NoAllocHelpers
} // namespace app::classes::types
