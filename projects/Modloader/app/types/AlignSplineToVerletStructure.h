#pragma once
#include <Modloader/app/structs/AlignSplineToVerletStructure.h>
#include <Modloader/app/structs/AlignSplineToVerletStructure__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlignSplineToVerletStructure {
        inline app::AlignSplineToVerletStructure__Class** type_info() {
            static app::AlignSplineToVerletStructure__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlignSplineToVerletStructure__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlignSplineToVerletStructure__Class* get_class() {
            return il2cpp::get_class<app::AlignSplineToVerletStructure__Class>(type_info(), "", "AlignSplineToVerletStructure");
        }
        inline app::AlignSplineToVerletStructure* create() {
            return il2cpp::create_object<app::AlignSplineToVerletStructure>(get_class());
        }
    } // namespace AlignSplineToVerletStructure
} // namespace app::classes::types
