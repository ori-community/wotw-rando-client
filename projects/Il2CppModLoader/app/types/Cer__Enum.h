#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Cer__Enum {
        namespace {
            inline app::Cer__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Cer__Enum__Class** type_info = &type_info_ref;
        inline app::Cer__Enum__Class* get_class() {
            return il2cpp::get_class<app::Cer__Enum__Class>(type_info, "System.Runtime.ConstrainedExecution", "Cer");
        }
        inline app::Cer__Enum* create() {
            return il2cpp::create_object<app::Cer__Enum>(get_class());
        }
    } // namespace Cer__Enum
} // namespace app::classes::types
