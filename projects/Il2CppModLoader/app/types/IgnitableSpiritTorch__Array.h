#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IgnitableSpiritTorch__Array {
        namespace {
            inline app::IgnitableSpiritTorch__Array__Class* type_info_ref = nullptr;
        }
        inline app::IgnitableSpiritTorch__Array__Class** type_info = &type_info_ref;
        inline app::IgnitableSpiritTorch__Array__Class* get_class() {
            return il2cpp::get_class<app::IgnitableSpiritTorch__Array__Class>(type_info, "", "IgnitableSpiritTorch[]");
        }
        inline app::IgnitableSpiritTorch__Array* create() {
            return il2cpp::create_object<app::IgnitableSpiritTorch__Array>(get_class());
        }
    } // namespace IgnitableSpiritTorch__Array
} // namespace app::classes::types
