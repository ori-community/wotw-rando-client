#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyAnimatorSerializer {
        namespace {
            app::LegacyAnimatorSerializer__Class* type_info_ref = nullptr;
        }
        app::LegacyAnimatorSerializer__Class** type_info = &type_info_ref;
        inline app::LegacyAnimatorSerializer__Class* get_class() {
            return il2cpp::get_class<app::LegacyAnimatorSerializer__Class>(type_info, "", "LegacyAnimatorSerializer");
        }
        inline app::LegacyAnimatorSerializer* create() {
            return il2cpp::create_object<app::LegacyAnimatorSerializer>(get_class());
        }
    } // namespace LegacyAnimatorSerializer
} // namespace app::classes::types
