#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightInfluence__Array {
        namespace {
            inline app::LightInfluence__Array__Class* type_info_ref = nullptr;
        }
        inline app::LightInfluence__Array__Class** type_info = &type_info_ref;
        inline app::LightInfluence__Array__Class* get_class() {
            return il2cpp::get_class<app::LightInfluence__Array__Class>(type_info, "", "LightInfluence[]");
        }
        inline app::LightInfluence__Array* create() {
            return il2cpp::create_object<app::LightInfluence__Array>(get_class());
        }
    } // namespace LightInfluence__Array
} // namespace app::classes::types
