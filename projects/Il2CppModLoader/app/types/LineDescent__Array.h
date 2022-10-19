#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LineDescent__Array {
        namespace {
            inline app::LineDescent__Array__Class* type_info_ref = nullptr;
        }
        inline app::LineDescent__Array__Class** type_info = &type_info_ref;
        inline app::LineDescent__Array__Class* get_class() {
            return il2cpp::get_class<app::LineDescent__Array__Class>(type_info, "CatlikeCoding.TextBox", "LineDescent[]");
        }
        inline app::LineDescent__Array* create() {
            return il2cpp::create_object<app::LineDescent__Array>(get_class());
        }
    } // namespace LineDescent__Array
} // namespace app::classes::types
