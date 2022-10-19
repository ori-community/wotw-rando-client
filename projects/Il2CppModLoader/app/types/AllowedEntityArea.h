#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AllowedEntityArea {
        inline app::AllowedEntityArea__Class** type_info = (app::AllowedEntityArea__Class**)(modloader::win::memory::resolve_rva(0x04753A60));
        inline app::AllowedEntityArea__Class* get_class() {
            return il2cpp::get_class<app::AllowedEntityArea__Class>(type_info, "", "AllowedEntityArea");
        }
        inline app::AllowedEntityArea* create() {
            return il2cpp::create_object<app::AllowedEntityArea>(get_class());
        }
    } // namespace AllowedEntityArea
} // namespace app::classes::types
