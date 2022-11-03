#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProtectedByShellCondition {
        namespace {
            inline app::ProtectedByShellCondition__Class* type_info_ref = nullptr;
        }
        inline app::ProtectedByShellCondition__Class** type_info = &type_info_ref;
        inline app::ProtectedByShellCondition__Class* get_class() {
            return il2cpp::get_class<app::ProtectedByShellCondition__Class>(type_info, "", "ProtectedByShellCondition");
        }
        inline app::ProtectedByShellCondition* create() {
            return il2cpp::create_object<app::ProtectedByShellCondition>(get_class());
        }
    } // namespace ProtectedByShellCondition
} // namespace app::classes::types
