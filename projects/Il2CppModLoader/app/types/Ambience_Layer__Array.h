#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Ambience_Layer__Array {
        namespace {
            inline app::Ambience_Layer__Array__Class* type_info_ref = nullptr;
        }
        inline app::Ambience_Layer__Array__Class** type_info = &type_info_ref;
        inline app::Ambience_Layer__Array__Class* get_class() {
            return il2cpp::get_class<app::Ambience_Layer__Array__Class>(type_info, "Core", "Ambience+Layer[]");
        }
        inline app::Ambience_Layer__Array* create() {
            return il2cpp::create_object<app::Ambience_Layer__Array>(get_class());
        }
    } // namespace Ambience_Layer__Array
} // namespace app::classes::types
