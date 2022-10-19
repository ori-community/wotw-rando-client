#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoNestPlaceholder {
        namespace {
            inline app::SkeetoNestPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoNestPlaceholder__Class** type_info = &type_info_ref;
        inline app::SkeetoNestPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SkeetoNestPlaceholder__Class>(type_info, "", "SkeetoNestPlaceholder");
        }
        inline app::SkeetoNestPlaceholder* create() {
            return il2cpp::create_object<app::SkeetoNestPlaceholder>(get_class());
        }
    } // namespace SkeetoNestPlaceholder
} // namespace app::classes::types
