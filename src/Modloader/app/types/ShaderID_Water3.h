#pragma once
#include <Modloader/app/structs/ShaderID_Water3.h>
#include <Modloader/app/structs/ShaderID_Water3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Water3 {
        inline app::ShaderID_Water3__Class** type_info() {
            static app::ShaderID_Water3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Water3__Class**)(modloader::win::memory::resolve_rva(0x047082B8));
            }
            return cache;
        }
        inline app::ShaderID_Water3__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Water3__Class>(type_info(), "", "ShaderID_Water3");
        }
        inline app::ShaderID_Water3* create() {
            return il2cpp::create_object<app::ShaderID_Water3>(get_class());
        }
    } // namespace ShaderID_Water3
} // namespace app::classes::types
