#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WhiteBalance {
        namespace {
            inline app::WhiteBalance__Class* type_info_ref = nullptr;
        }
        inline app::WhiteBalance__Class** type_info = &type_info_ref;
        inline app::WhiteBalance__Class* get_class() {
            return il2cpp::get_class<app::WhiteBalance__Class>(type_info, "Colorful", "WhiteBalance");
        }
        inline app::WhiteBalance* create() {
            return il2cpp::create_object<app::WhiteBalance>(get_class());
        }
    } // namespace WhiteBalance
} // namespace app::classes::types
