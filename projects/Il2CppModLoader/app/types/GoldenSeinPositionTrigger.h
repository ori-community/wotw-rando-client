#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GoldenSeinPositionTrigger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GoldenSeinPositionTrigger__Class** type_info;
        inline app::GoldenSeinPositionTrigger__Class* get_class() {
            return il2cpp::get_class<app::GoldenSeinPositionTrigger__Class>(type_info, "", "GoldenSeinPositionTrigger");
        }
        inline app::GoldenSeinPositionTrigger* create() {
            return il2cpp::create_object<app::GoldenSeinPositionTrigger>(get_class());
        }
    } // namespace GoldenSeinPositionTrigger
} // namespace app::classes::types
