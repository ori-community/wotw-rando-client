#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LineInfoHandling__Enum {
        namespace {
            inline app::LineInfoHandling__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LineInfoHandling__Enum__Class** type_info = &type_info_ref;
        inline app::LineInfoHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::LineInfoHandling__Enum__Class>(type_info, "Newtonsoft.Json.Linq", "LineInfoHandling");
        }
        inline app::LineInfoHandling__Enum* create() {
            return il2cpp::create_object<app::LineInfoHandling__Enum>(get_class());
        }
    } // namespace LineInfoHandling__Enum
} // namespace app::classes::types
