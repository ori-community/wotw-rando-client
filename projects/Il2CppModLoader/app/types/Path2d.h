#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Path2d {
        namespace {
            inline app::Path2d__Class* type_info_ref = nullptr;
        }
        inline app::Path2d__Class** type_info = &type_info_ref;
        inline app::Path2d__Class* get_class() {
            return il2cpp::get_class<app::Path2d__Class>(type_info, "", "Path2d");
        }
        inline app::Path2d* create() {
            return il2cpp::create_object<app::Path2d>(get_class());
        }
    } // namespace Path2d
} // namespace app::classes::types
