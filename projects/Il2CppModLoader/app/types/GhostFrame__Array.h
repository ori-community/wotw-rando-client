#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostFrame__Array {
        namespace {
            inline app::GhostFrame__Array__Class* type_info_ref = nullptr;
        }
        inline app::GhostFrame__Array__Class** type_info = &type_info_ref;
        inline app::GhostFrame__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostFrame__Array__Class>(type_info, "", "GhostFrame[]");
        }
        inline app::GhostFrame__Array* create() {
            return il2cpp::create_object<app::GhostFrame__Array>(get_class());
        }
    } // namespace GhostFrame__Array
} // namespace app::classes::types
