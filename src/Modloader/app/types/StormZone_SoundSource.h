#pragma once
#include <Modloader/app/structs/StormZone_SoundSource.h>
#include <Modloader/app/structs/StormZone_SoundSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StormZone_SoundSource {
        inline app::StormZone_SoundSource__Class** type_info() {
            static app::StormZone_SoundSource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StormZone_SoundSource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StormZone_SoundSource__Class* get_class() {
            return il2cpp::get_nested_class<app::StormZone_SoundSource__Class>(type_info(), "", "StormZone", "SoundSource");
        }
        inline app::StormZone_SoundSource* create() {
            return il2cpp::create_object<app::StormZone_SoundSource>(get_class());
        }
    } // namespace StormZone_SoundSource
} // namespace app::classes::types
