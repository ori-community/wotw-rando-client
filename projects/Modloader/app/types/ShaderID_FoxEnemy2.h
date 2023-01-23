#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_FoxEnemy2__Class.h>
#include <Modloader/app/structs/ShaderID_FoxEnemy2.h>

namespace app::classes::types {
    namespace ShaderID_FoxEnemy2 {
        inline app::ShaderID_FoxEnemy2__Class** type_info = (app::ShaderID_FoxEnemy2__Class**)(modloader::win::memory::resolve_rva(0x04739CC0));
        inline app::ShaderID_FoxEnemy2__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FoxEnemy2__Class>(type_info, "", "ShaderID_FoxEnemy2");
        }
        inline app::ShaderID_FoxEnemy2* create() {
            return il2cpp::create_object<app::ShaderID_FoxEnemy2>(get_class());
        }
    } // namespace ShaderID_FoxEnemy2
} // namespace app::classes::types
