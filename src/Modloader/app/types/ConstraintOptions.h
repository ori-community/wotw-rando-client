#pragma once
#include <Modloader/app/structs/ConstraintOptions.h>
#include <Modloader/app/structs/ConstraintOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintOptions {
        inline app::ConstraintOptions__Class** type_info() {
            static app::ConstraintOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstraintOptions__Class**)(modloader::win::memory::resolve_rva(0x047729C8));
            }
            return cache;
        }
        inline app::ConstraintOptions__Class* get_class() {
            return il2cpp::get_class<app::ConstraintOptions__Class>(type_info(), "TriangleNet.Meshing", "ConstraintOptions");
        }
        inline app::ConstraintOptions* create() {
            return il2cpp::create_object<app::ConstraintOptions>(get_class());
        }
    } // namespace ConstraintOptions
} // namespace app::classes::types
