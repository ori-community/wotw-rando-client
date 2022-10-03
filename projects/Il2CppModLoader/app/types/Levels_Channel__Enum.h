#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Levels_Channel__Enum {
        namespace {
            app::Levels_Channel__Enum__Class* type_info_ref = nullptr;
        }
        app::Levels_Channel__Enum__Class** type_info = &type_info_ref;
        inline app::Levels_Channel__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Levels_Channel__Enum__Class>(type_info, "Colorful", "Levels", "Channel");
        }
        inline app::Levels_Channel__Enum* create() {
            return il2cpp::create_object<app::Levels_Channel__Enum>(get_class());
        }
    } // namespace Levels_Channel__Enum
} // namespace app::classes::types
