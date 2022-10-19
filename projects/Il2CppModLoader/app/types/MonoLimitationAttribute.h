#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoLimitationAttribute {
        namespace {
            inline app::MonoLimitationAttribute__Class* type_info_ref = nullptr;
        }
        inline app::MonoLimitationAttribute__Class** type_info = &type_info_ref;
        inline app::MonoLimitationAttribute__Class* get_class() {
            return il2cpp::get_class<app::MonoLimitationAttribute__Class>(type_info, "System", "MonoLimitationAttribute");
        }
        inline app::MonoLimitationAttribute* create() {
            return il2cpp::create_object<app::MonoLimitationAttribute>(get_class());
        }
    } // namespace MonoLimitationAttribute
} // namespace app::classes::types
