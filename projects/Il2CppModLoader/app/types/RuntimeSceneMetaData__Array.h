#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeSceneMetaData__Array {
        inline app::RuntimeSceneMetaData__Array__Class** type_info = (app::RuntimeSceneMetaData__Array__Class**)(modloader::win::memory::resolve_rva(0x0478E2D0));
        inline app::RuntimeSceneMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeSceneMetaData__Array__Class>(type_info, "", "RuntimeSceneMetaData[]");
        }
        inline app::RuntimeSceneMetaData__Array* create() {
            return il2cpp::create_object<app::RuntimeSceneMetaData__Array>(get_class());
        }
    } // namespace RuntimeSceneMetaData__Array
} // namespace app::classes::types
