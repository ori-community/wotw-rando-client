#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Sprite__Array {
        namespace {
            inline app::Sprite__Array__Class* type_info_ref = nullptr;
        }
        inline app::Sprite__Array__Class** type_info = &type_info_ref;
        inline app::Sprite__Array__Class* get_class() {
            return il2cpp::get_class<app::Sprite__Array__Class>(type_info, "UnityEngine", "Sprite[]");
        }
        inline app::Sprite__Array* create() {
            return il2cpp::create_object<app::Sprite__Array>(get_class());
        }
    } // namespace Sprite__Array
} // namespace app::classes::types
