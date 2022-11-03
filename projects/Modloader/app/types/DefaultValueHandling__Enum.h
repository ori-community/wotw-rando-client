#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultValueHandling__Enum {
        namespace {
            inline app::DefaultValueHandling__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DefaultValueHandling__Enum__Class** type_info = &type_info_ref;
        inline app::DefaultValueHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueHandling__Enum__Class>(type_info, "Newtonsoft.Json", "DefaultValueHandling");
        }
        inline app::DefaultValueHandling__Enum* create() {
            return il2cpp::create_object<app::DefaultValueHandling__Enum>(get_class());
        }
    } // namespace DefaultValueHandling__Enum
} // namespace app::classes::types
