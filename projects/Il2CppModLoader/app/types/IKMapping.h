#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKMapping {
        namespace {
            app::IKMapping__Class* type_info_ref = nullptr;
        }
        app::IKMapping__Class** type_info = &type_info_ref;
        inline app::IKMapping__Class* get_class() {
            return il2cpp::get_class<app::IKMapping__Class>(type_info, "RootMotion.FinalIK", "IKMapping");
        }
        inline app::IKMapping* create() {
            return il2cpp::create_object<app::IKMapping>(get_class());
        }
    } // namespace IKMapping
} // namespace app::classes::types
