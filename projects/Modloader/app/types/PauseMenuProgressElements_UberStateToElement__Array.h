#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PauseMenuProgressElements_UberStateToElement__Array {
        namespace {
            inline app::PauseMenuProgressElements_UberStateToElement__Array__Class* type_info_ref = nullptr;
        }
        inline app::PauseMenuProgressElements_UberStateToElement__Array__Class** type_info = &type_info_ref;
        inline app::PauseMenuProgressElements_UberStateToElement__Array__Class* get_class() {
            return il2cpp::get_class<app::PauseMenuProgressElements_UberStateToElement__Array__Class>(type_info, "", "PauseMenuProgressElements+UberStateToElement[]");
        }
        inline app::PauseMenuProgressElements_UberStateToElement__Array* create() {
            return il2cpp::create_object<app::PauseMenuProgressElements_UberStateToElement__Array>(get_class());
        }
    } // namespace PauseMenuProgressElements_UberStateToElement__Array
} // namespace app::classes::types
