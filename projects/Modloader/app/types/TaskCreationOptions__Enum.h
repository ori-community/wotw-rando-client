#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TaskCreationOptions__Enum {
        namespace {
            inline app::TaskCreationOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TaskCreationOptions__Enum__Class** type_info = &type_info_ref;
        inline app::TaskCreationOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::TaskCreationOptions__Enum__Class>(type_info, "System.Threading.Tasks", "TaskCreationOptions");
        }
        inline app::TaskCreationOptions__Enum* create() {
            return il2cpp::create_object<app::TaskCreationOptions__Enum>(get_class());
        }
    } // namespace TaskCreationOptions__Enum
} // namespace app::classes::types
