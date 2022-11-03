#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpSustainHelper {
        inline app::JumpSustainHelper__Class** type_info = (app::JumpSustainHelper__Class**)(modloader::win::memory::resolve_rva(0x0471C188));
        inline app::JumpSustainHelper__Class* get_class() {
            return il2cpp::get_class<app::JumpSustainHelper__Class>(type_info, "", "JumpSustainHelper");
        }
        inline app::JumpSustainHelper* create() {
            return il2cpp::create_object<app::JumpSustainHelper>(get_class());
        }
    } // namespace JumpSustainHelper
} // namespace app::classes::types
