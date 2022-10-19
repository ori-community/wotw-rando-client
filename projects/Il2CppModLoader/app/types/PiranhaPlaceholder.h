#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PiranhaPlaceholder {
        namespace {
            inline app::PiranhaPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::PiranhaPlaceholder__Class** type_info = &type_info_ref;
        inline app::PiranhaPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::PiranhaPlaceholder__Class>(type_info, "", "PiranhaPlaceholder");
        }
        inline app::PiranhaPlaceholder* create() {
            return il2cpp::create_object<app::PiranhaPlaceholder>(get_class());
        }
    } // namespace PiranhaPlaceholder
} // namespace app::classes::types
