#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GoldenSeinPositionTrigger {
        inline app::GoldenSeinPositionTrigger__Class** type_info = (app::GoldenSeinPositionTrigger__Class**)(modloader::win::memory::resolve_rva(0x04739D70));
        inline app::GoldenSeinPositionTrigger__Class* get_class() {
            return il2cpp::get_class<app::GoldenSeinPositionTrigger__Class>(type_info, "", "GoldenSeinPositionTrigger");
        }
        inline app::GoldenSeinPositionTrigger* create() {
            return il2cpp::create_object<app::GoldenSeinPositionTrigger>(get_class());
        }
    } // namespace GoldenSeinPositionTrigger
} // namespace app::classes::types
