#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderTextureMemoryless__Enum {
        namespace {
            inline app::RenderTextureMemoryless__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RenderTextureMemoryless__Enum__Class** type_info = &type_info_ref;
        inline app::RenderTextureMemoryless__Enum__Class* get_class() {
            return il2cpp::get_class<app::RenderTextureMemoryless__Enum__Class>(type_info, "UnityEngine", "RenderTextureMemoryless");
        }
        inline app::RenderTextureMemoryless__Enum* create() {
            return il2cpp::create_object<app::RenderTextureMemoryless__Enum>(get_class());
        }
    } // namespace RenderTextureMemoryless__Enum
} // namespace app::classes::types
