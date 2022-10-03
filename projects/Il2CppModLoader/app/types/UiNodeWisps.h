#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UiNodeWisps {
        namespace {
            app::UiNodeWisps__Class* type_info_ref = nullptr;
        }
        app::UiNodeWisps__Class** type_info = &type_info_ref;
        inline app::UiNodeWisps__Class* get_class() {
            return il2cpp::get_class<app::UiNodeWisps__Class>(type_info, "", "UiNodeWisps");
        }
        inline app::UiNodeWisps* create() {
            return il2cpp::create_object<app::UiNodeWisps>(get_class());
        }
    } // namespace UiNodeWisps
} // namespace app::classes::types
