#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransparencySortMode__Enum__Class.h>
#include <Modloader/app/structs/TransparencySortMode__Enum.h>

namespace app::classes::types {
    namespace TransparencySortMode__Enum {
        namespace {
            inline app::TransparencySortMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TransparencySortMode__Enum__Class** type_info = &type_info_ref;
        inline app::TransparencySortMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TransparencySortMode__Enum__Class>(type_info, "UnityEngine", "TransparencySortMode");
        }
        inline app::TransparencySortMode__Enum* create() {
            return il2cpp::create_object<app::TransparencySortMode__Enum>(get_class());
        }
    } // namespace TransparencySortMode__Enum
} // namespace app::classes::types
