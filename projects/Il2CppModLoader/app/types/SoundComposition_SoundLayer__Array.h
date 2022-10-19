#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundComposition_SoundLayer__Array {
        namespace {
            inline app::SoundComposition_SoundLayer__Array__Class* type_info_ref = nullptr;
        }
        inline app::SoundComposition_SoundLayer__Array__Class** type_info = &type_info_ref;
        inline app::SoundComposition_SoundLayer__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundComposition_SoundLayer__Array__Class>(type_info, "", "SoundComposition+SoundLayer[]");
        }
        inline app::SoundComposition_SoundLayer__Array* create() {
            return il2cpp::create_object<app::SoundComposition_SoundLayer__Array>(get_class());
        }
    } // namespace SoundComposition_SoundLayer__Array
} // namespace app::classes::types
