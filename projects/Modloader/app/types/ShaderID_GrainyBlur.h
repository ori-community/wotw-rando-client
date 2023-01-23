#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_GrainyBlur__Class.h>
#include <Modloader/app/structs/ShaderID_GrainyBlur.h>

namespace app::classes::types {
    namespace ShaderID_GrainyBlur {
        inline app::ShaderID_GrainyBlur__Class** type_info = (app::ShaderID_GrainyBlur__Class**)(modloader::win::memory::resolve_rva(0x0473DF50));
        inline app::ShaderID_GrainyBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GrainyBlur__Class>(type_info, "Colorful", "ShaderID_GrainyBlur");
        }
        inline app::ShaderID_GrainyBlur* create() {
            return il2cpp::create_object<app::ShaderID_GrainyBlur>(get_class());
        }
    } // namespace ShaderID_GrainyBlur
} // namespace app::classes::types
