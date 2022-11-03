#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnableMapAction {
        namespace {
            inline app::EnableMapAction__Class* type_info_ref = nullptr;
        }
        inline app::EnableMapAction__Class** type_info = &type_info_ref;
        inline app::EnableMapAction__Class* get_class() {
            return il2cpp::get_class<app::EnableMapAction__Class>(type_info, "", "EnableMapAction");
        }
        inline app::EnableMapAction* create() {
            return il2cpp::create_object<app::EnableMapAction>(get_class());
        }
    } // namespace EnableMapAction
} // namespace app::classes::types
