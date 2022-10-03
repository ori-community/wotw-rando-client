#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightInfluence__Array {
        namespace {
            app::LightInfluence__Array__Class* type_info_ref = nullptr;
        }
        app::LightInfluence__Array__Class** type_info = &type_info_ref;
        inline app::LightInfluence__Array__Class* get_class() {
            return il2cpp::get_class<app::LightInfluence__Array__Class>(type_info, "", "LightInfluence[]");
        }
        inline app::LightInfluence__Array* create() {
            return il2cpp::create_object<app::LightInfluence__Array>(get_class());
        }
    } // namespace LightInfluence__Array
} // namespace app::classes::types
