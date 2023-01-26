#pragma once
#include <Modloader/app/structs/WaapiJsonProjectInfo.h>
#include <Modloader/app/structs/WaapiJsonProjectInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonProjectInfo {
        inline app::WaapiJsonProjectInfo__Class** type_info() {
            static app::WaapiJsonProjectInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiJsonProjectInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiJsonProjectInfo__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonProjectInfo__Class>(type_info(), "", "WaapiJsonProjectInfo");
        }
        inline app::WaapiJsonProjectInfo* create() {
            return il2cpp::create_object<app::WaapiJsonProjectInfo>(get_class());
        }
    } // namespace WaapiJsonProjectInfo
} // namespace app::classes::types
