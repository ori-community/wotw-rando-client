#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompoundMessageProvider {
        namespace {
            app::CompoundMessageProvider__Class* type_info_ref = nullptr;
        }
        app::CompoundMessageProvider__Class** type_info = &type_info_ref;
        inline app::CompoundMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::CompoundMessageProvider__Class>(type_info, "", "CompoundMessageProvider");
        }
        inline app::CompoundMessageProvider* create() {
            return il2cpp::create_object<app::CompoundMessageProvider>(get_class());
        }
    } // namespace CompoundMessageProvider
} // namespace app::classes::types
