#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Texture2D__Array {
        inline app::Texture2D__Array__Class** type_info = (app::Texture2D__Array__Class**)(modloader::win::memory::resolve_rva(0x047402C8));
        inline app::Texture2D__Array__Class* get_class() {
            return il2cpp::get_class<app::Texture2D__Array__Class>(type_info, "UnityEngine", "Texture2D[]");
        }
        inline app::Texture2D__Array* create() {
            return il2cpp::create_object<app::Texture2D__Array>(get_class());
        }
    } // namespace Texture2D__Array
} // namespace app::classes::types
