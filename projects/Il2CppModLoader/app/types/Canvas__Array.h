#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Canvas__Array {
        namespace {
            inline app::Canvas__Array__Class* type_info_ref = nullptr;
        }
        inline app::Canvas__Array__Class** type_info = &type_info_ref;
        inline app::Canvas__Array__Class* get_class() {
            return il2cpp::get_class<app::Canvas__Array__Class>(type_info, "UnityEngine", "Canvas[]");
        }
        inline app::Canvas__Array* create() {
            return il2cpp::create_object<app::Canvas__Array>(get_class());
        }
    } // namespace Canvas__Array
} // namespace app::classes::types
