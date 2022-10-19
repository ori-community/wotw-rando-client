#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugProjectileTester {
        namespace {
            inline app::DebugProjectileTester__Class* type_info_ref = nullptr;
        }
        inline app::DebugProjectileTester__Class** type_info = &type_info_ref;
        inline app::DebugProjectileTester__Class* get_class() {
            return il2cpp::get_class<app::DebugProjectileTester__Class>(type_info, "", "DebugProjectileTester");
        }
        inline app::DebugProjectileTester* create() {
            return il2cpp::create_object<app::DebugProjectileTester>(get_class());
        }
    } // namespace DebugProjectileTester
} // namespace app::classes::types
