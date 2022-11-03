#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostStateDefinition {
        namespace {
            inline app::PostStateDefinition__Class* type_info_ref = nullptr;
        }
        inline app::PostStateDefinition__Class** type_info = &type_info_ref;
        inline app::PostStateDefinition__Class* get_class() {
            return il2cpp::get_class<app::PostStateDefinition__Class>(type_info, "", "PostStateDefinition");
        }
        inline app::PostStateDefinition* create() {
            return il2cpp::create_object<app::PostStateDefinition>(get_class());
        }
    } // namespace PostStateDefinition
} // namespace app::classes::types
