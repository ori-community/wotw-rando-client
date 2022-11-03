#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriState__Enum {
        namespace {
            inline app::TriState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TriState__Enum__Class** type_info = &type_info_ref;
        inline app::TriState__Enum__Class* get_class() {
            return il2cpp::get_class<app::TriState__Enum__Class>(type_info, "System.Xml", "TriState");
        }
        inline app::TriState__Enum* create() {
            return il2cpp::create_object<app::TriState__Enum>(get_class());
        }
    } // namespace TriState__Enum
} // namespace app::classes::types
