#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RectMask2D {
        namespace {
            inline app::RectMask2D__Class* type_info_ref = nullptr;
        }
        inline app::RectMask2D__Class** type_info = &type_info_ref;
        inline app::RectMask2D__Class* get_class() {
            return il2cpp::get_class<app::RectMask2D__Class>(type_info, "UnityEngine.UI", "RectMask2D");
        }
        inline app::RectMask2D* create() {
            return il2cpp::create_object<app::RectMask2D>(get_class());
        }
        inline app::RectMask2D__Array* create_array(int size) {
            return il2cpp::array_new<app::RectMask2D__Array>(get_class(), size);
        }
        inline app::RectMask2D__Array* create_array(const std::vector<app::RectMask2D*>& items) {
            return il2cpp::array_new<app::RectMask2D__Array>(get_class(), items);
        }
    } // namespace RectMask2D
} // namespace app::classes::types
