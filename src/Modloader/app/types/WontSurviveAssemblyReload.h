#pragma once
#include <Modloader/app/structs/WontSurviveAssemblyReload.h>
#include <Modloader/app/structs/WontSurviveAssemblyReload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WontSurviveAssemblyReload {
        inline app::WontSurviveAssemblyReload__Class** type_info() {
            static app::WontSurviveAssemblyReload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WontSurviveAssemblyReload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WontSurviveAssemblyReload__Class* get_class() {
            return il2cpp::get_class<app::WontSurviveAssemblyReload__Class>(type_info(), "", "WontSurviveAssemblyReload");
        }
        inline app::WontSurviveAssemblyReload* create() {
            return il2cpp::create_object<app::WontSurviveAssemblyReload>(get_class());
        }
    } // namespace WontSurviveAssemblyReload
} // namespace app::classes::types
