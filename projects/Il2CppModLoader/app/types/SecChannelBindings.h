#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecChannelBindings {
        namespace {
            app::SecChannelBindings__Class* type_info_ref = nullptr;
        }
        app::SecChannelBindings__Class** type_info = &type_info_ref;
        inline app::SecChannelBindings__Class* get_class() {
            return il2cpp::get_class<app::SecChannelBindings__Class>(type_info, "System.Net", "SecChannelBindings");
        }
        inline app::SecChannelBindings* create() {
            return il2cpp::create_object<app::SecChannelBindings>(get_class());
        }
    } // namespace SecChannelBindings
} // namespace app::classes::types
