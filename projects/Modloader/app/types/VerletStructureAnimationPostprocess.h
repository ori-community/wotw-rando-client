#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletStructureAnimationPostprocess {
        namespace {
            inline app::VerletStructureAnimationPostprocess__Class* type_info_ref = nullptr;
        }
        inline app::VerletStructureAnimationPostprocess__Class** type_info = &type_info_ref;
        inline app::VerletStructureAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::VerletStructureAnimationPostprocess__Class>(type_info, "Moon", "VerletStructureAnimationPostprocess");
        }
        inline app::VerletStructureAnimationPostprocess* create() {
            return il2cpp::create_object<app::VerletStructureAnimationPostprocess>(get_class());
        }
    } // namespace VerletStructureAnimationPostprocess
} // namespace app::classes::types
