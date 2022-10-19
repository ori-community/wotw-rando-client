#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResumeGameController {
        inline app::ResumeGameController__Class** type_info = (app::ResumeGameController__Class**)(modloader::win::memory::resolve_rva(0x04731E88));
        inline app::ResumeGameController__Class* get_class() {
            return il2cpp::get_class<app::ResumeGameController__Class>(type_info, "", "ResumeGameController");
        }
        inline app::ResumeGameController* create() {
            return il2cpp::create_object<app::ResumeGameController>(get_class());
        }
    } // namespace ResumeGameController
} // namespace app::classes::types
