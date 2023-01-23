#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatParseHandling__Enum__Class.h>
#include <Modloader/app/structs/FloatParseHandling__Enum.h>

namespace app::classes::types {
    namespace FloatParseHandling__Enum {
        namespace {
            inline app::FloatParseHandling__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FloatParseHandling__Enum__Class** type_info = &type_info_ref;
        inline app::FloatParseHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::FloatParseHandling__Enum__Class>(type_info, "Newtonsoft.Json", "FloatParseHandling");
        }
        inline app::FloatParseHandling__Enum* create() {
            return il2cpp::create_object<app::FloatParseHandling__Enum>(get_class());
        }
    } // namespace FloatParseHandling__Enum
} // namespace app::classes::types
