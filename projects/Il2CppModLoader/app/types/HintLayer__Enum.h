#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HintLayer__Enum {
        namespace {
            inline app::HintLayer__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HintLayer__Enum__Class** type_info = &type_info_ref;
        inline app::HintLayer__Enum__Class* get_class() {
            return il2cpp::get_class<app::HintLayer__Enum__Class>(type_info, "", "HintLayer");
        }
        inline app::HintLayer__Enum* create() {
            return il2cpp::create_object<app::HintLayer__Enum>(get_class());
        }
    } // namespace HintLayer__Enum
} // namespace app::classes::types
