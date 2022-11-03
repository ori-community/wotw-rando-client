#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputHandle_t__Array {
        namespace {
            inline app::InputHandle_t__Array__Class* type_info_ref = nullptr;
        }
        inline app::InputHandle_t__Array__Class** type_info = &type_info_ref;
        inline app::InputHandle_t__Array__Class* get_class() {
            return il2cpp::get_class<app::InputHandle_t__Array__Class>(type_info, "Steamworks", "InputHandle_t[]");
        }
        inline app::InputHandle_t__Array* create() {
            return il2cpp::create_object<app::InputHandle_t__Array>(get_class());
        }
    } // namespace InputHandle_t__Array
} // namespace app::classes::types
