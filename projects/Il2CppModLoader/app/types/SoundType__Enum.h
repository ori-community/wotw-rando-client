#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundType__Enum {
        namespace {
            app::SoundType__Enum__Class* type_info_ref = nullptr;
        }
        app::SoundType__Enum__Class** type_info = &type_info_ref;
        inline app::SoundType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SoundType__Enum__Class>(type_info, "", "SoundType");
        }
        inline app::SoundType__Enum* create() {
            return il2cpp::create_object<app::SoundType__Enum>(get_class());
        }
    } // namespace SoundType__Enum
} // namespace app::classes::types
