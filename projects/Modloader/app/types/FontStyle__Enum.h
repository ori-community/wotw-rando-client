#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FontStyle__Enum {
        namespace {
            inline app::FontStyle__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FontStyle__Enum__Class** type_info = &type_info_ref;
        inline app::FontStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::FontStyle__Enum__Class>(type_info, "UnityEngine", "FontStyle");
        }
        inline app::FontStyle__Enum* create() {
            return il2cpp::create_object<app::FontStyle__Enum>(get_class());
        }
    } // namespace FontStyle__Enum
} // namespace app::classes::types
