#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BipedLimbOrientations_LimbOrientation {
        inline app::BipedLimbOrientations_LimbOrientation__Class** type_info = (app::BipedLimbOrientations_LimbOrientation__Class**)(modloader::win::memory::resolve_rva(0x04767DC0));
        inline app::BipedLimbOrientations_LimbOrientation__Class* get_class() {
            return il2cpp::get_nested_class<app::BipedLimbOrientations_LimbOrientation__Class>(type_info, "RootMotion", "BipedLimbOrientations", "LimbOrientation");
        }
        inline app::BipedLimbOrientations_LimbOrientation* create() {
            return il2cpp::create_object<app::BipedLimbOrientations_LimbOrientation>(get_class());
        }
    } // namespace BipedLimbOrientations_LimbOrientation
} // namespace app::classes::types
