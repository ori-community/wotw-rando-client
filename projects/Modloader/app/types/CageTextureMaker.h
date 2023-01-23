#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CageTextureMaker__Class.h>
#include <Modloader/app/structs/CageTextureMaker.h>

namespace app::classes::types {
    namespace CageTextureMaker {
        inline app::CageTextureMaker__Class** type_info = (app::CageTextureMaker__Class**)(modloader::win::memory::resolve_rva(0x0471C9D8));
        inline app::CageTextureMaker__Class* get_class() {
            return il2cpp::get_class<app::CageTextureMaker__Class>(type_info, "Moon", "CageTextureMaker");
        }
        inline app::CageTextureMaker* create() {
            return il2cpp::create_object<app::CageTextureMaker>(get_class());
        }
    } // namespace CageTextureMaker
} // namespace app::classes::types
