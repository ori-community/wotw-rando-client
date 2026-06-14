#pragma once
#include <Modloader/app/structs/AddUGCDependencyResult_t.h>
#include <Modloader/app/structs/AddUGCDependencyResult_t__Boxed.h>
#include <Modloader/app/structs/AddUGCDependencyResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddUGCDependencyResult_t {
        inline app::AddUGCDependencyResult_t__Class** type_info() {
            static app::AddUGCDependencyResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AddUGCDependencyResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AddUGCDependencyResult_t__Class* get_class() {
            return il2cpp::get_class<app::AddUGCDependencyResult_t__Class>(type_info(), "Steamworks", "AddUGCDependencyResult_t");
        }
        inline app::AddUGCDependencyResult_t* create() {
            return il2cpp::create_object<app::AddUGCDependencyResult_t>(get_class());
        }
        inline app::AddUGCDependencyResult_t__Boxed* box(app::AddUGCDependencyResult_t value) {
            return il2cpp::box_value<app::AddUGCDependencyResult_t__Boxed>(get_class(), value);
        }
    } // namespace AddUGCDependencyResult_t
} // namespace app::classes::types
