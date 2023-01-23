#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OperationMethod__Enum__Class.h>
#include <Modloader/app/structs/OperationMethod__Enum.h>

namespace app::classes::types {
    namespace OperationMethod__Enum {
        namespace {
            inline app::OperationMethod__Enum__Class* type_info_ref = nullptr;
        }
        inline app::OperationMethod__Enum__Class** type_info = &type_info_ref;
        inline app::OperationMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::OperationMethod__Enum__Class>(type_info, "", "OperationMethod");
        }
        inline app::OperationMethod__Enum* create() {
            return il2cpp::create_object<app::OperationMethod__Enum>(get_class());
        }
    } // namespace OperationMethod__Enum
} // namespace app::classes::types
