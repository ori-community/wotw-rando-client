#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DistortExtraModifier {
        namespace {
            app::DistortExtraModifier__Class* type_info_ref = nullptr;
        }
        app::DistortExtraModifier__Class** type_info = &type_info_ref;
        inline app::DistortExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::DistortExtraModifier__Class>(type_info, "", "DistortExtraModifier");
        }
        inline app::DistortExtraModifier* create() {
            return il2cpp::create_object<app::DistortExtraModifier>(get_class());
        }
    } // namespace DistortExtraModifier
} // namespace app::classes::types
