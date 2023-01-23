#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollisionFilter__Class.h>
#include <Modloader/app/structs/CollisionFilter.h>

namespace app::classes::types {
    namespace CollisionFilter {
        namespace {
            inline app::CollisionFilter__Class* type_info_ref = nullptr;
        }
        inline app::CollisionFilter__Class** type_info = &type_info_ref;
        inline app::CollisionFilter__Class* get_class() {
            return il2cpp::get_class<app::CollisionFilter__Class>(type_info, "", "CollisionFilter");
        }
        inline app::CollisionFilter* create() {
            return il2cpp::create_object<app::CollisionFilter>(get_class());
        }
    } // namespace CollisionFilter
} // namespace app::classes::types
