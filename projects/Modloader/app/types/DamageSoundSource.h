#pragma once
#include <Modloader/app/structs/DamageSoundSource.h>
#include <Modloader/app/structs/DamageSoundSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageSoundSource {
        inline app::DamageSoundSource__Class** type_info() {
            static app::DamageSoundSource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageSoundSource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageSoundSource__Class* get_class() {
            return il2cpp::get_class<app::DamageSoundSource__Class>(type_info(), "", "DamageSoundSource");
        }
        inline app::DamageSoundSource* create() {
            return il2cpp::create_object<app::DamageSoundSource>(get_class());
        }
    } // namespace DamageSoundSource
} // namespace app::classes::types
