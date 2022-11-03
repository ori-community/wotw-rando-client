#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AutoIncrementValue {
        namespace {
            inline app::AutoIncrementValue__Class* type_info_ref = nullptr;
        }
        inline app::AutoIncrementValue__Class** type_info = &type_info_ref;
        inline app::AutoIncrementValue__Class* get_class() {
            return il2cpp::get_class<app::AutoIncrementValue__Class>(type_info, "System.Data", "AutoIncrementValue");
        }
        inline app::AutoIncrementValue* create() {
            return il2cpp::create_object<app::AutoIncrementValue>(get_class());
        }
    } // namespace AutoIncrementValue
} // namespace app::classes::types
