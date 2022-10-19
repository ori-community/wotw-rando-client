#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FABRIKRoot {
        inline app::FABRIKRoot__Class** type_info = (app::FABRIKRoot__Class**)(modloader::win::memory::resolve_rva(0x04727000));
        inline app::FABRIKRoot__Class* get_class() {
            return il2cpp::get_class<app::FABRIKRoot__Class>(type_info, "RootMotion.FinalIK", "FABRIKRoot");
        }
        inline app::FABRIKRoot* create() {
            return il2cpp::create_object<app::FABRIKRoot>(get_class());
        }
    } // namespace FABRIKRoot
} // namespace app::classes::types
