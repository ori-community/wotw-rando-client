#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAnimatedValueListener__Array {
        namespace {
            inline app::IAnimatedValueListener__Array__Class* type_info_ref = nullptr;
        }
        inline app::IAnimatedValueListener__Array__Class** type_info = &type_info_ref;
        inline app::IAnimatedValueListener__Array__Class* get_class() {
            return il2cpp::get_class<app::IAnimatedValueListener__Array__Class>(type_info, "Moon", "IAnimatedValueListener[]");
        }
        inline app::IAnimatedValueListener__Array* create() {
            return il2cpp::create_object<app::IAnimatedValueListener__Array>(get_class());
        }
    } // namespace IAnimatedValueListener__Array
} // namespace app::classes::types
