#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundAction_CommandType__Enum {
        namespace {
            app::SoundAction_CommandType__Enum__Class* type_info_ref = nullptr;
        }
        app::SoundAction_CommandType__Enum__Class** type_info = &type_info_ref;
        inline app::SoundAction_CommandType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundAction_CommandType__Enum__Class>(type_info, "", "SoundAction", "CommandType");
        }
        inline app::SoundAction_CommandType__Enum* create() {
            return il2cpp::create_object<app::SoundAction_CommandType__Enum>(get_class());
        }
    } // namespace SoundAction_CommandType__Enum
} // namespace app::classes::types
