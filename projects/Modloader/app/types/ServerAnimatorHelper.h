#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerAnimatorHelper {
        namespace {
            inline app::ServerAnimatorHelper__Class* type_info_ref = nullptr;
        }
        inline app::ServerAnimatorHelper__Class** type_info = &type_info_ref;
        inline app::ServerAnimatorHelper__Class* get_class() {
            return il2cpp::get_class<app::ServerAnimatorHelper__Class>(type_info, "", "ServerAnimatorHelper");
        }
        inline app::ServerAnimatorHelper* create() {
            return il2cpp::create_object<app::ServerAnimatorHelper>(get_class());
        }
    } // namespace ServerAnimatorHelper
} // namespace app::classes::types
