#pragma once
#include <Modloader/app/structs/ShaderID.h>
#include <Modloader/app/structs/ShaderID__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID {
        inline app::ShaderID__Class** type_info() {
            static app::ShaderID__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID__Class**)(modloader::win::memory::resolve_rva(0x04783F98));
            }
            return cache;
        }
        inline app::ShaderID__Class* get_class() {
            return il2cpp::get_class<app::ShaderID__Class>(type_info(), "Moon.Rendering", "ShaderID");
        }
        inline app::ShaderID* create() {
            return il2cpp::create_object<app::ShaderID>(get_class());
        }
    } // namespace ShaderID
} // namespace app::classes::types
