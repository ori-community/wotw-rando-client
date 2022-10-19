#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCTextCylinderWrapper {
        inline app::CCTextCylinderWrapper__Class** type_info = (app::CCTextCylinderWrapper__Class**)(modloader::win::memory::resolve_rva(0x047829E0));
        inline app::CCTextCylinderWrapper__Class* get_class() {
            return il2cpp::get_class<app::CCTextCylinderWrapper__Class>(type_info, "", "CCTextCylinderWrapper");
        }
        inline app::CCTextCylinderWrapper* create() {
            return il2cpp::create_object<app::CCTextCylinderWrapper>(get_class());
        }
    } // namespace CCTextCylinderWrapper
} // namespace app::classes::types
