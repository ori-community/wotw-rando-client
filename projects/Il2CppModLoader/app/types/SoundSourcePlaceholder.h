#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundSourcePlaceholder {
        namespace {
            app::SoundSourcePlaceholder__Class* type_info_ref = nullptr;
        }
        app::SoundSourcePlaceholder__Class** type_info = &type_info_ref;
        inline app::SoundSourcePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SoundSourcePlaceholder__Class>(type_info, "", "SoundSourcePlaceholder");
        }
        inline app::SoundSourcePlaceholder* create() {
            return il2cpp::create_object<app::SoundSourcePlaceholder>(get_class());
        }
    } // namespace SoundSourcePlaceholder
} // namespace app::classes::types
