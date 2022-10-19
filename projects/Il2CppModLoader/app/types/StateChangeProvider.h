#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateChangeProvider {
        namespace {
            inline app::StateChangeProvider__Class* type_info_ref = nullptr;
        }
        inline app::StateChangeProvider__Class** type_info = &type_info_ref;
        inline app::StateChangeProvider__Class* get_class() {
            return il2cpp::get_class<app::StateChangeProvider__Class>(type_info, "Moon", "StateChangeProvider");
        }
        inline app::StateChangeProvider* create() {
            return il2cpp::create_object<app::StateChangeProvider>(get_class());
        }
    } // namespace StateChangeProvider
} // namespace app::classes::types
