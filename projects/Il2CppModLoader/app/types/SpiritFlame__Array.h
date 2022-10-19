#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritFlame__Array {
        namespace {
            inline app::SpiritFlame__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpiritFlame__Array__Class** type_info = &type_info_ref;
        inline app::SpiritFlame__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritFlame__Array__Class>(type_info, "", "SpiritFlame[]");
        }
        inline app::SpiritFlame__Array* create() {
            return il2cpp::create_object<app::SpiritFlame__Array>(get_class());
        }
    } // namespace SpiritFlame__Array
} // namespace app::classes::types
