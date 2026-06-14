#pragma once
#include <Modloader/app/structs/GetAppDependenciesResult_t.h>
#include <Modloader/app/structs/GetAppDependenciesResult_t__Boxed.h>
#include <Modloader/app/structs/GetAppDependenciesResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetAppDependenciesResult_t {
        inline app::GetAppDependenciesResult_t__Class** type_info() {
            static app::GetAppDependenciesResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GetAppDependenciesResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GetAppDependenciesResult_t__Class* get_class() {
            return il2cpp::get_class<app::GetAppDependenciesResult_t__Class>(type_info(), "Steamworks", "GetAppDependenciesResult_t");
        }
        inline app::GetAppDependenciesResult_t* create() {
            return il2cpp::create_object<app::GetAppDependenciesResult_t>(get_class());
        }
        inline app::GetAppDependenciesResult_t__Boxed* box(app::GetAppDependenciesResult_t value) {
            return il2cpp::box_value<app::GetAppDependenciesResult_t__Boxed>(get_class(), value);
        }
    } // namespace GetAppDependenciesResult_t
} // namespace app::classes::types
