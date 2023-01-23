#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeverMode__Enum__Class.h>
#include <Modloader/app/structs/LeverMode__Enum.h>

namespace app::classes::types {
    namespace LeverMode__Enum {
        namespace {
            inline app::LeverMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LeverMode__Enum__Class** type_info = &type_info_ref;
        inline app::LeverMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeverMode__Enum__Class>(type_info, "", "LeverMode");
        }
        inline app::LeverMode__Enum* create() {
            return il2cpp::create_object<app::LeverMode__Enum>(get_class());
        }
    } // namespace LeverMode__Enum
} // namespace app::classes::types
