#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BooleanUberStatePair {
        namespace {
            app::BooleanUberStatePair__Class* type_info_ref = nullptr;
        }
        app::BooleanUberStatePair__Class** type_info = &type_info_ref;
        inline app::BooleanUberStatePair__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberStatePair__Class>(type_info, "", "BooleanUberStatePair");
        }
        inline app::BooleanUberStatePair* create() {
            return il2cpp::create_object<app::BooleanUberStatePair>(get_class());
        }
    } // namespace BooleanUberStatePair
} // namespace app::classes::types
