#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum__Class.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum__Array.h>

namespace app::classes::types {
    namespace RenderTextureFormat__Enum {
        inline app::RenderTextureFormat__Enum__Class** type_info = (app::RenderTextureFormat__Enum__Class**)(modloader::win::memory::resolve_rva(0x04711420));
        inline app::RenderTextureFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderTextureFormat__Enum__Class>(type_info, "UnityEngine", "RenderTextureFormat");
        }
        inline app::RenderTextureFormat__Enum* create() {
            return il2cpp::create_object<app::RenderTextureFormat__Enum>(get_class());
        }
        inline app::RenderTextureFormat__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderTextureFormat__Enum__Array>(get_class(), size);
        }
        inline app::RenderTextureFormat__Enum__Array* create_array(const std::vector<app::RenderTextureFormat__Enum*>& items) {
            return il2cpp::array_new<app::RenderTextureFormat__Enum__Array>(get_class(), items);
        }
    } // namespace RenderTextureFormat__Enum
} // namespace app::classes::types
