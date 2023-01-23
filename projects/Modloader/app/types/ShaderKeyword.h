#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderKeyword__Class.h>
#include <Modloader/app/structs/ShaderKeyword.h>

namespace app::classes::types {
    namespace ShaderKeyword {
        inline app::ShaderKeyword__Class** type_info = (app::ShaderKeyword__Class**)(modloader::win::memory::resolve_rva(0x04721378));
        inline app::ShaderKeyword__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword__Class>(type_info, "Moon.Rendering", "ShaderKeyword");
        }
        inline app::ShaderKeyword* create() {
            return il2cpp::create_object<app::ShaderKeyword>(get_class());
        }
    } // namespace ShaderKeyword
} // namespace app::classes::types
