#pragma once
#include <Modloader/app/structs/MantisGrayboxPatrolBehaviour.h>
#include <Modloader/app/structs/MantisGrayboxPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisGrayboxPatrolBehaviour {
        inline app::MantisGrayboxPatrolBehaviour__Class** type_info() {
            static app::MantisGrayboxPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisGrayboxPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisGrayboxPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisGrayboxPatrolBehaviour__Class>(type_info(), "", "MantisGrayboxPatrolBehaviour");
        }
        inline app::MantisGrayboxPatrolBehaviour* create() {
            return il2cpp::create_object<app::MantisGrayboxPatrolBehaviour>(get_class());
        }
    } // namespace MantisGrayboxPatrolBehaviour
} // namespace app::classes::types
