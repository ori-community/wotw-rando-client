#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Consistency__Enum {
        namespace {
            inline app::Consistency__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Consistency__Enum__Class** type_info = &type_info_ref;
        inline app::Consistency__Enum__Class* get_class() {
            return il2cpp::get_class<app::Consistency__Enum__Class>(type_info, "System.Runtime.ConstrainedExecution", "Consistency");
        }
        inline app::Consistency__Enum* create() {
            return il2cpp::create_object<app::Consistency__Enum>(get_class());
        }
    } // namespace Consistency__Enum
} // namespace app::classes::types
