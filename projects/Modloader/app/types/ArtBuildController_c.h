#pragma once
#include <Modloader/app/structs/ArtBuildController_c.h>
#include <Modloader/app/structs/ArtBuildController_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtBuildController_c {
        inline app::ArtBuildController_c__Class** type_info() {
            static app::ArtBuildController_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArtBuildController_c__Class**)(modloader::win::memory::resolve_rva(0x0477AA20));
            }
            return cache;
        }
        inline app::ArtBuildController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ArtBuildController_c__Class>(type_info(), "", "ArtBuildController", "<>c");
        }
        inline app::ArtBuildController_c* create() {
            return il2cpp::create_object<app::ArtBuildController_c>(get_class());
        }
    } // namespace ArtBuildController_c
} // namespace app::classes::types
