#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaapiJsonProjectInfo {
        namespace {
            inline app::WaapiJsonProjectInfo__Class* type_info_ref = nullptr;
        }
        inline app::WaapiJsonProjectInfo__Class** type_info = &type_info_ref;
        inline app::WaapiJsonProjectInfo__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonProjectInfo__Class>(type_info, "", "WaapiJsonProjectInfo");
        }
        inline app::WaapiJsonProjectInfo* create() {
            return il2cpp::create_object<app::WaapiJsonProjectInfo>(get_class());
        }
    } // namespace WaapiJsonProjectInfo
} // namespace app::classes::types
