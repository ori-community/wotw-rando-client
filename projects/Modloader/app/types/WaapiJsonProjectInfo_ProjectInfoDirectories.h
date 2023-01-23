#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaapiJsonProjectInfo_ProjectInfoDirectories__Class.h>
#include <Modloader/app/structs/WaapiJsonProjectInfo_ProjectInfoDirectories.h>

namespace app::classes::types {
    namespace WaapiJsonProjectInfo_ProjectInfoDirectories {
        namespace {
            inline app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class* type_info_ref = nullptr;
        }
        inline app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class** type_info = &type_info_ref;
        inline app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class* get_class() {
            return il2cpp::get_nested_class<app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class>(type_info, "", "WaapiJsonProjectInfo", "ProjectInfoDirectories");
        }
        inline app::WaapiJsonProjectInfo_ProjectInfoDirectories* create() {
            return il2cpp::create_object<app::WaapiJsonProjectInfo_ProjectInfoDirectories>(get_class());
        }
    } // namespace WaapiJsonProjectInfo_ProjectInfoDirectories
} // namespace app::classes::types
