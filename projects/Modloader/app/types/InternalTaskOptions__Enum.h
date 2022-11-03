#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalTaskOptions__Enum {
        namespace {
            inline app::InternalTaskOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InternalTaskOptions__Enum__Class** type_info = &type_info_ref;
        inline app::InternalTaskOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalTaskOptions__Enum__Class>(type_info, "System.Threading.Tasks", "InternalTaskOptions");
        }
        inline app::InternalTaskOptions__Enum* create() {
            return il2cpp::create_object<app::InternalTaskOptions__Enum>(get_class());
        }
    } // namespace InternalTaskOptions__Enum
} // namespace app::classes::types
