#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollapsingPlatform__Array {
        namespace {
            inline app::CollapsingPlatform__Array__Class* type_info_ref = nullptr;
        }
        inline app::CollapsingPlatform__Array__Class** type_info = &type_info_ref;
        inline app::CollapsingPlatform__Array__Class* get_class() {
            return il2cpp::get_class<app::CollapsingPlatform__Array__Class>(type_info, "", "CollapsingPlatform[]");
        }
        inline app::CollapsingPlatform__Array* create() {
            return il2cpp::create_object<app::CollapsingPlatform__Array>(get_class());
        }
    } // namespace CollapsingPlatform__Array
} // namespace app::classes::types
