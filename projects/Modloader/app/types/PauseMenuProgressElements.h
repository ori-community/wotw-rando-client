#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PauseMenuProgressElements {
        namespace {
            inline app::PauseMenuProgressElements__Class* type_info_ref = nullptr;
        }
        inline app::PauseMenuProgressElements__Class** type_info = &type_info_ref;
        inline app::PauseMenuProgressElements__Class* get_class() {
            return il2cpp::get_class<app::PauseMenuProgressElements__Class>(type_info, "", "PauseMenuProgressElements");
        }
        inline app::PauseMenuProgressElements* create() {
            return il2cpp::create_object<app::PauseMenuProgressElements>(get_class());
        }
    } // namespace PauseMenuProgressElements
} // namespace app::classes::types
