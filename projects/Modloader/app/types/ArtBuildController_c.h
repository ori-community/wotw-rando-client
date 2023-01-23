#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArtBuildController_c__Class.h>
#include <Modloader/app/structs/ArtBuildController_c.h>

namespace app::classes::types {
    namespace ArtBuildController_c {
        inline app::ArtBuildController_c__Class** type_info = (app::ArtBuildController_c__Class**)(modloader::win::memory::resolve_rva(0x0477AA20));
        inline app::ArtBuildController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ArtBuildController_c__Class>(type_info, "", "ArtBuildController", "<>c");
        }
        inline app::ArtBuildController_c* create() {
            return il2cpp::create_object<app::ArtBuildController_c>(get_class());
        }
    } // namespace ArtBuildController_c
} // namespace app::classes::types
