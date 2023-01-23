#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WontSurviveAssemblyReload__Class.h>
#include <Modloader/app/structs/WontSurviveAssemblyReload.h>

namespace app::classes::types {
    namespace WontSurviveAssemblyReload {
        namespace {
            inline app::WontSurviveAssemblyReload__Class* type_info_ref = nullptr;
        }
        inline app::WontSurviveAssemblyReload__Class** type_info = &type_info_ref;
        inline app::WontSurviveAssemblyReload__Class* get_class() {
            return il2cpp::get_class<app::WontSurviveAssemblyReload__Class>(type_info, "", "WontSurviveAssemblyReload");
        }
        inline app::WontSurviveAssemblyReload* create() {
            return il2cpp::create_object<app::WontSurviveAssemblyReload>(get_class());
        }
    } // namespace WontSurviveAssemblyReload
} // namespace app::classes::types
