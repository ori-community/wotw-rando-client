#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventDescritorHelpers {
        inline app::EventDescritorHelpers__Class** type_info = (app::EventDescritorHelpers__Class**)(modloader::win::memory::resolve_rva(0x04722428));
        inline app::EventDescritorHelpers__Class* get_class() {
            return il2cpp::get_class<app::EventDescritorHelpers__Class>(type_info, "Moon.Timeline", "EventDescritorHelpers");
        }
        inline app::EventDescritorHelpers* create() {
            return il2cpp::create_object<app::EventDescritorHelpers>(get_class());
        }
    } // namespace EventDescritorHelpers
} // namespace app::classes::types
