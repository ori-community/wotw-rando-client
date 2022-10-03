#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightInfluenceSystem {
        namespace {
            app::LightInfluenceSystem__Class* type_info_ref = nullptr;
        }
        app::LightInfluenceSystem__Class** type_info = &type_info_ref;
        inline app::LightInfluenceSystem__Class* get_class() {
            return il2cpp::get_class<app::LightInfluenceSystem__Class>(type_info, "", "LightInfluenceSystem");
        }
        inline app::LightInfluenceSystem* create() {
            return il2cpp::create_object<app::LightInfluenceSystem>(get_class());
        }
    } // namespace LightInfluenceSystem
} // namespace app::classes::types
