#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsPropertyAttribute {
        namespace {
            inline app::fsPropertyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::fsPropertyAttribute__Class** type_info = &type_info_ref;
        inline app::fsPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::fsPropertyAttribute__Class>(type_info, "FullSerializer", "fsPropertyAttribute");
        }
        inline app::fsPropertyAttribute* create() {
            return il2cpp::create_object<app::fsPropertyAttribute>(get_class());
        }
    } // namespace fsPropertyAttribute
} // namespace app::classes::types
