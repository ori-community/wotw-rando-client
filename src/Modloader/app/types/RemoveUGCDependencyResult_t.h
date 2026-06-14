#pragma once
#include <Modloader/app/structs/RemoveUGCDependencyResult_t.h>
#include <Modloader/app/structs/RemoveUGCDependencyResult_t__Boxed.h>
#include <Modloader/app/structs/RemoveUGCDependencyResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveUGCDependencyResult_t {
        inline app::RemoveUGCDependencyResult_t__Class** type_info() {
            static app::RemoveUGCDependencyResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoveUGCDependencyResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoveUGCDependencyResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoveUGCDependencyResult_t__Class>(type_info(), "Steamworks", "RemoveUGCDependencyResult_t");
        }
        inline app::RemoveUGCDependencyResult_t* create() {
            return il2cpp::create_object<app::RemoveUGCDependencyResult_t>(get_class());
        }
        inline app::RemoveUGCDependencyResult_t__Boxed* box(app::RemoveUGCDependencyResult_t value) {
            return il2cpp::box_value<app::RemoveUGCDependencyResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoveUGCDependencyResult_t
} // namespace app::classes::types
