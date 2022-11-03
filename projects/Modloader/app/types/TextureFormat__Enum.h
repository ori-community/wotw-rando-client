#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureFormat__Enum {
        inline app::TextureFormat__Enum__Class** type_info = (app::TextureFormat__Enum__Class**)(modloader::win::memory::resolve_rva(0x04796E80));
        inline app::TextureFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureFormat__Enum__Class>(type_info, "UnityEngine", "TextureFormat");
        }
        inline app::TextureFormat__Enum* create() {
            return il2cpp::create_object<app::TextureFormat__Enum>(get_class());
        }
    } // namespace TextureFormat__Enum
} // namespace app::classes::types
