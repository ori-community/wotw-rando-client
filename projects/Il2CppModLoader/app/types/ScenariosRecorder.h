#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenariosRecorder {
        inline app::ScenariosRecorder__Class** type_info = (app::ScenariosRecorder__Class**)(modloader::win::memory::resolve_rva(0x04724A18));
        inline app::ScenariosRecorder__Class* get_class() {
            return il2cpp::get_class<app::ScenariosRecorder__Class>(type_info, "", "ScenariosRecorder");
        }
        inline app::ScenariosRecorder* create() {
            return il2cpp::create_object<app::ScenariosRecorder>(get_class());
        }
    } // namespace ScenariosRecorder
} // namespace app::classes::types
