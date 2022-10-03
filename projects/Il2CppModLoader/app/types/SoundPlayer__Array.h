#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundPlayer__Array {
        namespace {
            app::SoundPlayer__Array__Class* type_info_ref = nullptr;
        }
        app::SoundPlayer__Array__Class** type_info = &type_info_ref;
        inline app::SoundPlayer__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundPlayer__Array__Class>(type_info, "", "SoundPlayer[]");
        }
        inline app::SoundPlayer__Array* create() {
            return il2cpp::create_object<app::SoundPlayer__Array>(get_class());
        }
    } // namespace SoundPlayer__Array
} // namespace app::classes::types
