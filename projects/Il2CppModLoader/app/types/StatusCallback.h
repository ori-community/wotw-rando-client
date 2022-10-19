#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatusCallback {
        namespace {
            inline app::StatusCallback__Class* type_info_ref = nullptr;
        }
        inline app::StatusCallback__Class** type_info = &type_info_ref;
        inline app::StatusCallback__Class* get_class() {
            return il2cpp::get_class<app::StatusCallback__Class>(type_info, "", "StatusCallback");
        }
        inline app::StatusCallback* create() {
            return il2cpp::create_object<app::StatusCallback>(get_class());
        }
    } // namespace StatusCallback
} // namespace app::classes::types
