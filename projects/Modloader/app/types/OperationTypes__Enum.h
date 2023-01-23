#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OperationTypes__Enum__Class.h>
#include <Modloader/app/structs/OperationTypes__Enum.h>

namespace app::classes::types {
    namespace OperationTypes__Enum {
        namespace {
            inline app::OperationTypes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::OperationTypes__Enum__Class** type_info = &type_info_ref;
        inline app::OperationTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::OperationTypes__Enum__Class>(type_info, "PlayFab.DataModels", "OperationTypes");
        }
        inline app::OperationTypes__Enum* create() {
            return il2cpp::create_object<app::OperationTypes__Enum>(get_class());
        }
    } // namespace OperationTypes__Enum
} // namespace app::classes::types
