#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CropUtility {
        namespace {
            inline app::CropUtility__Class* type_info_ref = nullptr;
        }
        inline app::CropUtility__Class** type_info = &type_info_ref;
        inline app::CropUtility__Class* get_class() {
            return il2cpp::get_class<app::CropUtility__Class>(type_info, "", "CropUtility");
        }
        inline app::CropUtility* create() {
            return il2cpp::create_object<app::CropUtility>(get_class());
        }
    } // namespace CropUtility
} // namespace app::classes::types
