#pragma once
#include <Modloader/app/structs/ShaderID_Water3UnderwaterEffect.h>
#include <Modloader/app/structs/ShaderID_Water3UnderwaterEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Water3UnderwaterEffect {
        inline app::ShaderID_Water3UnderwaterEffect__Class** type_info() {
            static app::ShaderID_Water3UnderwaterEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Water3UnderwaterEffect__Class**)(modloader::win::memory::resolve_rva(0x0476E6F0));
            }
            return cache;
        }
        inline app::ShaderID_Water3UnderwaterEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Water3UnderwaterEffect__Class>(type_info(), "", "ShaderID_Water3UnderwaterEffect");
        }
        inline app::ShaderID_Water3UnderwaterEffect* create() {
            return il2cpp::create_object<app::ShaderID_Water3UnderwaterEffect>(get_class());
        }
    } // namespace ShaderID_Water3UnderwaterEffect
} // namespace app::classes::types
