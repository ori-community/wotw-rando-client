#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum__Array__Class.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum__Array.h>

namespace app::classes::types {
    namespace RenderTextureFormat__Enum__Array {
        inline app::RenderTextureFormat__Enum__Array__Class** type_info = (app::RenderTextureFormat__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04784F28));
        inline app::RenderTextureFormat__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderTextureFormat__Enum__Array__Class>(type_info, "UnityEngine", "RenderTextureFormat[]");
        }
        inline app::RenderTextureFormat__Enum__Array* create() {
            return il2cpp::create_object<app::RenderTextureFormat__Enum__Array>(get_class());
        }
    } // namespace RenderTextureFormat__Enum__Array
} // namespace app::classes::types
