#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectUberStateWrapper {
        inline app::ObjectUberStateWrapper__Class** type_info = (app::ObjectUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x047166E8));
        inline app::ObjectUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::ObjectUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "ObjectUberStateWrapper");
        }
        inline app::ObjectUberStateWrapper* create() {
            return il2cpp::create_object<app::ObjectUberStateWrapper>(get_class());
        }
    } // namespace ObjectUberStateWrapper
} // namespace app::classes::types
