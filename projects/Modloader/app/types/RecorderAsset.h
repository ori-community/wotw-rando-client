#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecorderAsset {
        namespace {
            inline app::RecorderAsset__Class* type_info_ref = nullptr;
        }
        inline app::RecorderAsset__Class** type_info = &type_info_ref;
        inline app::RecorderAsset__Class* get_class() {
            return il2cpp::get_class<app::RecorderAsset__Class>(type_info, "", "RecorderAsset");
        }
        inline app::RecorderAsset* create() {
            return il2cpp::create_object<app::RecorderAsset>(get_class());
        }
    } // namespace RecorderAsset
} // namespace app::classes::types
