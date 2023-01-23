#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TreeAccessMethod__Enum__Class.h>
#include <Modloader/app/structs/TreeAccessMethod__Enum.h>

namespace app::classes::types {
    namespace TreeAccessMethod__Enum {
        namespace {
            inline app::TreeAccessMethod__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TreeAccessMethod__Enum__Class** type_info = &type_info_ref;
        inline app::TreeAccessMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::TreeAccessMethod__Enum__Class>(type_info, "System.Data", "TreeAccessMethod");
        }
        inline app::TreeAccessMethod__Enum* create() {
            return il2cpp::create_object<app::TreeAccessMethod__Enum>(get_class());
        }
    } // namespace TreeAccessMethod__Enum
} // namespace app::classes::types
