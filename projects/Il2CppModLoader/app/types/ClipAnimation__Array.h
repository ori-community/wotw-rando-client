#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClipAnimation__Array {
        namespace {
            inline app::ClipAnimation__Array__Class* type_info_ref = nullptr;
        }
        inline app::ClipAnimation__Array__Class** type_info = &type_info_ref;
        inline app::ClipAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::ClipAnimation__Array__Class>(type_info, "Moon", "ClipAnimation[]");
        }
        inline app::ClipAnimation__Array* create() {
            return il2cpp::create_object<app::ClipAnimation__Array>(get_class());
        }
    } // namespace ClipAnimation__Array
} // namespace app::classes::types
