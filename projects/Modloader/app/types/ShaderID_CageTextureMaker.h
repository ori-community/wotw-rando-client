#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CageTextureMaker__Class.h>
#include <Modloader/app/structs/ShaderID_CageTextureMaker.h>

namespace app::classes::types {
    namespace ShaderID_CageTextureMaker {
        inline app::ShaderID_CageTextureMaker__Class** type_info = (app::ShaderID_CageTextureMaker__Class**)(modloader::win::memory::resolve_rva(0x0470AD78));
        inline app::ShaderID_CageTextureMaker__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CageTextureMaker__Class>(type_info, "Moon", "ShaderID_CageTextureMaker");
        }
        inline app::ShaderID_CageTextureMaker* create() {
            return il2cpp::create_object<app::ShaderID_CageTextureMaker>(get_class());
        }
    } // namespace ShaderID_CageTextureMaker
} // namespace app::classes::types
