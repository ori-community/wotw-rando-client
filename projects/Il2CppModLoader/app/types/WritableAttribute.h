#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WritableAttribute {
        namespace {
            inline app::WritableAttribute__Class* type_info_ref = nullptr;
        }
        inline app::WritableAttribute__Class** type_info = &type_info_ref;
        inline app::WritableAttribute__Class* get_class() {
            return il2cpp::get_class<app::WritableAttribute__Class>(type_info, "UnityEngine", "WritableAttribute");
        }
        inline app::WritableAttribute* create() {
            return il2cpp::create_object<app::WritableAttribute>(get_class());
        }
    } // namespace WritableAttribute
} // namespace app::classes::types
