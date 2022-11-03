#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreloadData {
        namespace {
            inline app::PreloadData__Class* type_info_ref = nullptr;
        }
        inline app::PreloadData__Class** type_info = &type_info_ref;
        inline app::PreloadData__Class* get_class() {
            return il2cpp::get_class<app::PreloadData__Class>(type_info, "UnityEngine", "PreloadData");
        }
        inline app::PreloadData* create() {
            return il2cpp::create_object<app::PreloadData>(get_class());
        }
    } // namespace PreloadData
} // namespace app::classes::types
