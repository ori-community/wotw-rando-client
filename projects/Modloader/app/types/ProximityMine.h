#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProximityMine__Class.h>
#include <Modloader/app/structs/ProximityMine.h>

namespace app::classes::types {
    namespace ProximityMine {
        namespace {
            inline app::ProximityMine__Class* type_info_ref = nullptr;
        }
        inline app::ProximityMine__Class** type_info = &type_info_ref;
        inline app::ProximityMine__Class* get_class() {
            return il2cpp::get_class<app::ProximityMine__Class>(type_info, "", "ProximityMine");
        }
        inline app::ProximityMine* create() {
            return il2cpp::create_object<app::ProximityMine>(get_class());
        }
    } // namespace ProximityMine
} // namespace app::classes::types
