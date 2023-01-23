#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_Beautify__Class.h>
#include <Modloader/app/structs/ShaderID_Beautify.h>

namespace app::classes::types {
    namespace ShaderID_Beautify {
        inline app::ShaderID_Beautify__Class** type_info = (app::ShaderID_Beautify__Class**)(modloader::win::memory::resolve_rva(0x0471E060));
        inline app::ShaderID_Beautify__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Beautify__Class>(type_info, "BeautifyEffect", "ShaderID_Beautify");
        }
        inline app::ShaderID_Beautify* create() {
            return il2cpp::create_object<app::ShaderID_Beautify>(get_class());
        }
    } // namespace ShaderID_Beautify
} // namespace app::classes::types
