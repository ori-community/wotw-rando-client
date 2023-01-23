#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GhostAnimationData__Class.h>
#include <Modloader/app/structs/GhostAnimationData.h>

namespace app::classes::types {
    namespace GhostAnimationData {
        namespace {
            inline app::GhostAnimationData__Class* type_info_ref = nullptr;
        }
        inline app::GhostAnimationData__Class** type_info = &type_info_ref;
        inline app::GhostAnimationData__Class* get_class() {
            return il2cpp::get_class<app::GhostAnimationData__Class>(type_info, "", "GhostAnimationData");
        }
        inline app::GhostAnimationData* create() {
            return il2cpp::create_object<app::GhostAnimationData>(get_class());
        }
    } // namespace GhostAnimationData
} // namespace app::classes::types
