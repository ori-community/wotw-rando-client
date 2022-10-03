#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartSparkEffect {
        namespace {
            app::CartSparkEffect__Class* type_info_ref = nullptr;
        }
        app::CartSparkEffect__Class** type_info = &type_info_ref;
        inline app::CartSparkEffect__Class* get_class() {
            return il2cpp::get_class<app::CartSparkEffect__Class>(type_info, "", "CartSparkEffect");
        }
        inline app::CartSparkEffect* create() {
            return il2cpp::create_object<app::CartSparkEffect>(get_class());
        }
    } // namespace CartSparkEffect
} // namespace app::classes::types
