#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Cubemap {
        namespace {
            inline app::Cubemap__Class* type_info_ref = nullptr;
        }
        inline app::Cubemap__Class** type_info = &type_info_ref;
        inline app::Cubemap__Class* get_class() {
            return il2cpp::get_class<app::Cubemap__Class>(type_info, "UnityEngine", "Cubemap");
        }
        inline app::Cubemap* create() {
            return il2cpp::create_object<app::Cubemap>(get_class());
        }
    } // namespace Cubemap
} // namespace app::classes::types
