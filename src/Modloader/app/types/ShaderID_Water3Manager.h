#pragma once
#include <Modloader/app/structs/ShaderID_Water3Manager.h>
#include <Modloader/app/structs/ShaderID_Water3Manager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Water3Manager {
        inline app::ShaderID_Water3Manager__Class** type_info() {
            static app::ShaderID_Water3Manager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Water3Manager__Class**)(modloader::win::memory::resolve_rva(0x04702328));
            }
            return cache;
        }
        inline app::ShaderID_Water3Manager__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Water3Manager__Class>(type_info(), "", "ShaderID_Water3Manager");
        }
        inline app::ShaderID_Water3Manager* create() {
            return il2cpp::create_object<app::ShaderID_Water3Manager>(get_class());
        }
    } // namespace ShaderID_Water3Manager
} // namespace app::classes::types
