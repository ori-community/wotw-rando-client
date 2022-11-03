#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID {
        inline app::ShaderID__Class** type_info = (app::ShaderID__Class**)(modloader::win::memory::resolve_rva(0x04783F98));
        inline app::ShaderID__Class* get_class() {
            return il2cpp::get_class<app::ShaderID__Class>(type_info, "Moon.Rendering", "ShaderID");
        }
        inline app::ShaderID* create() {
            return il2cpp::create_object<app::ShaderID>(get_class());
        }
    } // namespace ShaderID
} // namespace app::classes::types
