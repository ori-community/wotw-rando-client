#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NpcProjectItem__Array {
        namespace {
            inline app::NpcProjectItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::NpcProjectItem__Array__Class** type_info = &type_info_ref;
        inline app::NpcProjectItem__Array__Class* get_class() {
            return il2cpp::get_class<app::NpcProjectItem__Array__Class>(type_info, "", "NpcProjectItem[]");
        }
        inline app::NpcProjectItem__Array* create() {
            return il2cpp::create_object<app::NpcProjectItem__Array>(get_class());
        }
    } // namespace NpcProjectItem__Array
} // namespace app::classes::types
