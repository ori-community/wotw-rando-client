#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundMessages {
        namespace {
            inline app::SoundMessages__Class* type_info_ref = nullptr;
        }
        inline app::SoundMessages__Class** type_info = &type_info_ref;
        inline app::SoundMessages__Class* get_class() {
            return il2cpp::get_class<app::SoundMessages__Class>(type_info, "", "SoundMessages");
        }
        inline app::SoundMessages* create() {
            return il2cpp::create_object<app::SoundMessages>(get_class());
        }
    } // namespace SoundMessages
} // namespace app::classes::types
