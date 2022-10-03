#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CombinedMessageProvider {
        namespace {
            app::CombinedMessageProvider__Class* type_info_ref = nullptr;
        }
        app::CombinedMessageProvider__Class** type_info = &type_info_ref;
        inline app::CombinedMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::CombinedMessageProvider__Class>(type_info, "", "CombinedMessageProvider");
        }
        inline app::CombinedMessageProvider* create() {
            return il2cpp::create_object<app::CombinedMessageProvider>(get_class());
        }
    } // namespace CombinedMessageProvider
} // namespace app::classes::types
