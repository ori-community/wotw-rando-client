#pragma once
#include <Modloader/app/structs/RemoveAppDependencyResult_t.h>
#include <Modloader/app/structs/RemoveAppDependencyResult_t__Boxed.h>
#include <Modloader/app/structs/RemoveAppDependencyResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveAppDependencyResult_t {
        inline app::RemoveAppDependencyResult_t__Class** type_info() {
            static app::RemoveAppDependencyResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoveAppDependencyResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoveAppDependencyResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoveAppDependencyResult_t__Class>(type_info(), "Steamworks", "RemoveAppDependencyResult_t");
        }
        inline app::RemoveAppDependencyResult_t* create() {
            return il2cpp::create_object<app::RemoveAppDependencyResult_t>(get_class());
        }
        inline app::RemoveAppDependencyResult_t__Boxed* box(app::RemoveAppDependencyResult_t value) {
            return il2cpp::box_value<app::RemoveAppDependencyResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoveAppDependencyResult_t
} // namespace app::classes::types
