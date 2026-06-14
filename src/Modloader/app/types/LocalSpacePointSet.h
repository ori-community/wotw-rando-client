#pragma once
#include <Modloader/app/structs/LocalSpacePointSet.h>
#include <Modloader/app/structs/LocalSpacePointSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalSpacePointSet {
        inline app::LocalSpacePointSet__Class** type_info() {
            static app::LocalSpacePointSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocalSpacePointSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocalSpacePointSet__Class* get_class() {
            return il2cpp::get_class<app::LocalSpacePointSet__Class>(type_info(), "", "LocalSpacePointSet");
        }
        inline app::LocalSpacePointSet* create() {
            return il2cpp::create_object<app::LocalSpacePointSet>(get_class());
        }
    } // namespace LocalSpacePointSet
} // namespace app::classes::types
