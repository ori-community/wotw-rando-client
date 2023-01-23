#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletSoftInteraction__Class.h>
#include <Modloader/app/structs/VerletSoftInteraction.h>

namespace app::classes::types {
    namespace VerletSoftInteraction {
        namespace {
            inline app::VerletSoftInteraction__Class* type_info_ref = nullptr;
        }
        inline app::VerletSoftInteraction__Class** type_info = &type_info_ref;
        inline app::VerletSoftInteraction__Class* get_class() {
            return il2cpp::get_class<app::VerletSoftInteraction__Class>(type_info, "", "VerletSoftInteraction");
        }
        inline app::VerletSoftInteraction* create() {
            return il2cpp::create_object<app::VerletSoftInteraction>(get_class());
        }
    } // namespace VerletSoftInteraction
} // namespace app::classes::types
