#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderTextureMemoryless__Enum__Class.h>
#include <Modloader/app/structs/RenderTextureMemoryless__Enum.h>

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
