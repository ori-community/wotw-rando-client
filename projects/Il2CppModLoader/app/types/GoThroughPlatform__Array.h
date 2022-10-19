#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GoThroughPlatform__Array {
        namespace {
            inline app::GoThroughPlatform__Array__Class* type_info_ref = nullptr;
        }
        inline app::GoThroughPlatform__Array__Class** type_info = &type_info_ref;
        inline app::GoThroughPlatform__Array__Class* get_class() {
            return il2cpp::get_class<app::GoThroughPlatform__Array__Class>(type_info, "", "GoThroughPlatform[]");
        }
        inline app::GoThroughPlatform__Array* create() {
            return il2cpp::create_object<app::GoThroughPlatform__Array>(get_class());
        }
    } // namespace GoThroughPlatform__Array
} // namespace app::classes::types
