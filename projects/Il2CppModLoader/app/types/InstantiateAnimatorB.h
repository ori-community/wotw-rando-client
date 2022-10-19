#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiateAnimatorB {
        inline app::InstantiateAnimatorB__Class** type_info = (app::InstantiateAnimatorB__Class**)(modloader::win::memory::resolve_rva(0x047354A0));
        inline app::InstantiateAnimatorB__Class* get_class() {
            return il2cpp::get_class<app::InstantiateAnimatorB__Class>(type_info, "", "InstantiateAnimatorB");
        }
        inline app::InstantiateAnimatorB* create() {
            return il2cpp::create_object<app::InstantiateAnimatorB>(get_class());
        }
    } // namespace InstantiateAnimatorB
} // namespace app::classes::types
