#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GrounderQuadruped__Class.h>
#include <Modloader/app/structs/GrounderQuadruped.h>

namespace app::classes::types {
    namespace GrounderQuadruped {
        namespace {
            inline app::GrounderQuadruped__Class* type_info_ref = nullptr;
        }
        inline app::GrounderQuadruped__Class** type_info = &type_info_ref;
        inline app::GrounderQuadruped__Class* get_class() {
            return il2cpp::get_class<app::GrounderQuadruped__Class>(type_info, "RootMotion.FinalIK", "GrounderQuadruped");
        }
        inline app::GrounderQuadruped* create() {
            return il2cpp::create_object<app::GrounderQuadruped>(get_class());
        }
    } // namespace GrounderQuadruped
} // namespace app::classes::types
