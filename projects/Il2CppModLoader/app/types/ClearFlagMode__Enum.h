#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClearFlagMode__Enum {
        namespace {
            app::ClearFlagMode__Enum__Class* type_info_ref = nullptr;
        }
        app::ClearFlagMode__Enum__Class** type_info = &type_info_ref;
        inline app::ClearFlagMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ClearFlagMode__Enum__Class>(type_info, "Moon.Rendering", "ClearFlagMode");
        }
        inline app::ClearFlagMode__Enum* create() {
            return il2cpp::create_object<app::ClearFlagMode__Enum>(get_class());
        }
    } // namespace ClearFlagMode__Enum
} // namespace app::classes::types
