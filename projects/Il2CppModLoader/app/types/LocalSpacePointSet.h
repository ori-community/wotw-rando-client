#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalSpacePointSet {
        namespace {
            app::LocalSpacePointSet__Class* type_info_ref = nullptr;
        }
        app::LocalSpacePointSet__Class** type_info = &type_info_ref;
        inline app::LocalSpacePointSet__Class* get_class() {
            return il2cpp::get_class<app::LocalSpacePointSet__Class>(type_info, "", "LocalSpacePointSet");
        }
        inline app::LocalSpacePointSet* create() {
            return il2cpp::create_object<app::LocalSpacePointSet>(get_class());
        }
    } // namespace LocalSpacePointSet
} // namespace app::classes::types
