#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResoucesUnloadingMode__Enum__Array {
        namespace {
            inline app::ResoucesUnloadingMode__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::ResoucesUnloadingMode__Enum__Array__Class** type_info = &type_info_ref;
        inline app::ResoucesUnloadingMode__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::ResoucesUnloadingMode__Enum__Array__Class>(type_info, "", "ResoucesUnloadingMode[]");
        }
        inline app::ResoucesUnloadingMode__Enum__Array* create() {
            return il2cpp::create_object<app::ResoucesUnloadingMode__Enum__Array>(get_class());
        }
    } // namespace ResoucesUnloadingMode__Enum__Array
} // namespace app::classes::types
