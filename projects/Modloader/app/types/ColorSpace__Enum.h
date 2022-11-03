#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorSpace__Enum {
        namespace {
            inline app::ColorSpace__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ColorSpace__Enum__Class** type_info = &type_info_ref;
        inline app::ColorSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::ColorSpace__Enum__Class>(type_info, "UnityEngine", "ColorSpace");
        }
        inline app::ColorSpace__Enum* create() {
            return il2cpp::create_object<app::ColorSpace__Enum>(get_class());
        }
    } // namespace ColorSpace__Enum
} // namespace app::classes::types
