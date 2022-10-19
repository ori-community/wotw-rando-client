#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HasComponentGameObjectFilter {
        namespace {
            inline app::HasComponentGameObjectFilter__Class* type_info_ref = nullptr;
        }
        inline app::HasComponentGameObjectFilter__Class** type_info = &type_info_ref;
        inline app::HasComponentGameObjectFilter__Class* get_class() {
            return il2cpp::get_class<app::HasComponentGameObjectFilter__Class>(type_info, "", "HasComponentGameObjectFilter");
        }
        inline app::HasComponentGameObjectFilter* create() {
            return il2cpp::create_object<app::HasComponentGameObjectFilter>(get_class());
        }
    } // namespace HasComponentGameObjectFilter
} // namespace app::classes::types
