#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocalSpacePointSet__Class.h>
#include <Modloader/app/structs/LocalSpacePointSet.h>

namespace app::classes::types {
    namespace LocalSpacePointSet {
        namespace {
            inline app::LocalSpacePointSet__Class* type_info_ref = nullptr;
        }
        inline app::LocalSpacePointSet__Class** type_info = &type_info_ref;
        inline app::LocalSpacePointSet__Class* get_class() {
            return il2cpp::get_class<app::LocalSpacePointSet__Class>(type_info, "", "LocalSpacePointSet");
        }
        inline app::LocalSpacePointSet* create() {
            return il2cpp::create_object<app::LocalSpacePointSet>(get_class());
        }
    } // namespace LocalSpacePointSet
} // namespace app::classes::types
