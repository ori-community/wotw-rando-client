#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundProvider__Array {
        namespace {
            app::SoundProvider__Array__Class* type_info_ref = nullptr;
        }
        app::SoundProvider__Array__Class** type_info = &type_info_ref;
        inline app::SoundProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundProvider__Array__Class>(type_info, "", "SoundProvider[]");
        }
        inline app::SoundProvider__Array* create() {
            return il2cpp::create_object<app::SoundProvider__Array>(get_class());
        }
    } // namespace SoundProvider__Array
} // namespace app::classes::types
