#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_Water3UnderwaterEffect__Class.h>
#include <Modloader/app/structs/ShaderID_Water3UnderwaterEffect.h>

namespace app::classes::types {
    namespace ShaderID_Water3UnderwaterEffect {
        inline app::ShaderID_Water3UnderwaterEffect__Class** type_info = (app::ShaderID_Water3UnderwaterEffect__Class**)(modloader::win::memory::resolve_rva(0x0476E6F0));
        inline app::ShaderID_Water3UnderwaterEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Water3UnderwaterEffect__Class>(type_info, "", "ShaderID_Water3UnderwaterEffect");
        }
        inline app::ShaderID_Water3UnderwaterEffect* create() {
            return il2cpp::create_object<app::ShaderID_Water3UnderwaterEffect>(get_class());
        }
    } // namespace ShaderID_Water3UnderwaterEffect
} // namespace app::classes::types
