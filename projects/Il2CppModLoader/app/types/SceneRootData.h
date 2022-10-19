#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneRootData {
        inline app::SceneRootData__Class** type_info = (app::SceneRootData__Class**)(modloader::win::memory::resolve_rva(0x04735F18));
        inline app::SceneRootData__Class* get_class() {
            return il2cpp::get_class<app::SceneRootData__Class>(type_info, "", "SceneRootData");
        }
        inline app::SceneRootData* create() {
            return il2cpp::create_object<app::SceneRootData>(get_class());
        }
    } // namespace SceneRootData
} // namespace app::classes::types
