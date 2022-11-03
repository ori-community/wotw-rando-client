#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlammablesStateCondition {
        namespace {
            inline app::FlammablesStateCondition__Class* type_info_ref = nullptr;
        }
        inline app::FlammablesStateCondition__Class** type_info = &type_info_ref;
        inline app::FlammablesStateCondition__Class* get_class() {
            return il2cpp::get_class<app::FlammablesStateCondition__Class>(type_info, "", "FlammablesStateCondition");
        }
        inline app::FlammablesStateCondition* create() {
            return il2cpp::create_object<app::FlammablesStateCondition>(get_class());
        }
    } // namespace FlammablesStateCondition
} // namespace app::classes::types
