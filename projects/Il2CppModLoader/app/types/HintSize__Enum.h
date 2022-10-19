#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HintSize__Enum {
        namespace {
            inline app::HintSize__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HintSize__Enum__Class** type_info = &type_info_ref;
        inline app::HintSize__Enum__Class* get_class() {
            return il2cpp::get_class<app::HintSize__Enum__Class>(type_info, "", "HintSize");
        }
        inline app::HintSize__Enum* create() {
            return il2cpp::create_object<app::HintSize__Enum>(get_class());
        }
    } // namespace HintSize__Enum
} // namespace app::classes::types
