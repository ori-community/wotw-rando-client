#pragma once
#include <Modloader/app/structs/CageTextureMaker.h>
#include <Modloader/app/structs/CageTextureMaker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageTextureMaker {
        inline app::CageTextureMaker__Class** type_info() {
            static app::CageTextureMaker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CageTextureMaker__Class**)(modloader::win::memory::resolve_rva(0x0471C9D8));
            }
            return cache;
        }
        inline app::CageTextureMaker__Class* get_class() {
            return il2cpp::get_class<app::CageTextureMaker__Class>(type_info(), "Moon", "CageTextureMaker");
        }
        inline app::CageTextureMaker* create() {
            return il2cpp::create_object<app::CageTextureMaker>(get_class());
        }
    } // namespace CageTextureMaker
} // namespace app::classes::types
