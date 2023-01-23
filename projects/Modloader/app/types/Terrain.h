#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Terrain__Class.h>
#include <Modloader/app/structs/Terrain.h>

namespace app::classes::types {
    namespace Terrain {
        namespace {
            inline app::Terrain__Class* type_info_ref = nullptr;
        }
        inline app::Terrain__Class** type_info = &type_info_ref;
        inline app::Terrain__Class* get_class() {
            return il2cpp::get_class<app::Terrain__Class>(type_info, "Moon", "Terrain");
        }
        inline app::Terrain* create() {
            return il2cpp::create_object<app::Terrain>(get_class());
        }
    } // namespace Terrain
} // namespace app::classes::types
