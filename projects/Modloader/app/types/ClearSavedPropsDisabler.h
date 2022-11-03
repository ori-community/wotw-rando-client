#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClearSavedPropsDisabler {
        namespace {
            inline app::ClearSavedPropsDisabler__Class* type_info_ref = nullptr;
        }
        inline app::ClearSavedPropsDisabler__Class** type_info = &type_info_ref;
        inline app::ClearSavedPropsDisabler__Class* get_class() {
            return il2cpp::get_class<app::ClearSavedPropsDisabler__Class>(type_info, "", "ClearSavedPropsDisabler");
        }
        inline app::ClearSavedPropsDisabler* create() {
            return il2cpp::create_object<app::ClearSavedPropsDisabler>(get_class());
        }
    } // namespace ClearSavedPropsDisabler
} // namespace app::classes::types
