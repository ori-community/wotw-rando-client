#pragma once
#include <Modloader/app/structs/Volumetric.h>
#include <Modloader/app/structs/Volumetric__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Volumetric {
        inline app::Volumetric__Class** type_info() {
            static app::Volumetric__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Volumetric__Class**)(modloader::win::memory::resolve_rva(0x0478BA90));
            }
            return cache;
        }
        inline app::Volumetric__Class* get_class() {
            return il2cpp::get_class<app::Volumetric__Class>(type_info(), "Moon.Rendering", "Volumetric");
        }
        inline app::Volumetric* create() {
            return il2cpp::create_object<app::Volumetric>(get_class());
        }
    } // namespace Volumetric
} // namespace app::classes::types
