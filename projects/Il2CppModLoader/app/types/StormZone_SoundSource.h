#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StormZone_SoundSource {
        namespace {
            inline app::StormZone_SoundSource__Class* type_info_ref = nullptr;
        }
        inline app::StormZone_SoundSource__Class** type_info = &type_info_ref;
        inline app::StormZone_SoundSource__Class* get_class() {
            return il2cpp::get_nested_class<app::StormZone_SoundSource__Class>(type_info, "", "StormZone", "SoundSource");
        }
        inline app::StormZone_SoundSource* create() {
            return il2cpp::create_object<app::StormZone_SoundSource>(get_class());
        }
    } // namespace StormZone_SoundSource
} // namespace app::classes::types
