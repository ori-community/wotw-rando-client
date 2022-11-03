#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AspectRatioFitter {
        namespace {
            inline app::AspectRatioFitter__Class* type_info_ref = nullptr;
        }
        inline app::AspectRatioFitter__Class** type_info = &type_info_ref;
        inline app::AspectRatioFitter__Class* get_class() {
            return il2cpp::get_class<app::AspectRatioFitter__Class>(type_info, "UnityEngine.UI", "AspectRatioFitter");
        }
        inline app::AspectRatioFitter* create() {
            return il2cpp::create_object<app::AspectRatioFitter>(get_class());
        }
    } // namespace AspectRatioFitter
} // namespace app::classes::types
