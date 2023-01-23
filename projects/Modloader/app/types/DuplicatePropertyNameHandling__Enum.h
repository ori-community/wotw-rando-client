#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DuplicatePropertyNameHandling__Enum__Class.h>
#include <Modloader/app/structs/DuplicatePropertyNameHandling__Enum.h>

namespace app::classes::types {
    namespace DuplicatePropertyNameHandling__Enum {
        namespace {
            inline app::DuplicatePropertyNameHandling__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DuplicatePropertyNameHandling__Enum__Class** type_info = &type_info_ref;
        inline app::DuplicatePropertyNameHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::DuplicatePropertyNameHandling__Enum__Class>(type_info, "Newtonsoft.Json.Linq", "DuplicatePropertyNameHandling");
        }
        inline app::DuplicatePropertyNameHandling__Enum* create() {
            return il2cpp::create_object<app::DuplicatePropertyNameHandling__Enum>(get_class());
        }
    } // namespace DuplicatePropertyNameHandling__Enum
} // namespace app::classes::types
