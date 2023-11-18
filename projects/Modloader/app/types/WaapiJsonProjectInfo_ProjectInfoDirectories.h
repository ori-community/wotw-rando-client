#pragma once
#include <Modloader/app/structs/WaapiJsonProjectInfo_ProjectInfoDirectories.h>
#include <Modloader/app/structs/WaapiJsonProjectInfo_ProjectInfoDirectories__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonProjectInfo_ProjectInfoDirectories {
        inline app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class** type_info() {
            static app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class* get_class() {
            return il2cpp::get_nested_class<app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class>(type_info(), "", "WaapiJsonProjectInfo", "ProjectInfoDirectories");
        }
        inline app::WaapiJsonProjectInfo_ProjectInfoDirectories* create() {
            return il2cpp::create_object<app::WaapiJsonProjectInfo_ProjectInfoDirectories>(get_class());
        }
    } // namespace WaapiJsonProjectInfo_ProjectInfoDirectories
} // namespace app::classes::types
