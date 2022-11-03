#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RectMask2D__Array {
        namespace {
            inline app::RectMask2D__Array__Class* type_info_ref = nullptr;
        }
        inline app::RectMask2D__Array__Class** type_info = &type_info_ref;
        inline app::RectMask2D__Array__Class* get_class() {
            return il2cpp::get_class<app::RectMask2D__Array__Class>(type_info, "UnityEngine.UI", "RectMask2D[]");
        }
        inline app::RectMask2D__Array* create() {
            return il2cpp::create_object<app::RectMask2D__Array>(get_class());
        }
    } // namespace RectMask2D__Array
} // namespace app::classes::types
