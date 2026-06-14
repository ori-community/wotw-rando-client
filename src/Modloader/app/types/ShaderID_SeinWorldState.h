#pragma once
#include <Modloader/app/structs/ShaderID_SeinWorldState.h>
#include <Modloader/app/structs/ShaderID_SeinWorldState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SeinWorldState {
        inline app::ShaderID_SeinWorldState__Class** type_info() {
            static app::ShaderID_SeinWorldState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_SeinWorldState__Class**)(modloader::win::memory::resolve_rva(0x04788CB8));
            }
            return cache;
        }
        inline app::ShaderID_SeinWorldState__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SeinWorldState__Class>(type_info(), "Sein.World", "ShaderID_SeinWorldState");
        }
        inline app::ShaderID_SeinWorldState* create() {
            return il2cpp::create_object<app::ShaderID_SeinWorldState>(get_class());
        }
    } // namespace ShaderID_SeinWorldState
} // namespace app::classes::types
