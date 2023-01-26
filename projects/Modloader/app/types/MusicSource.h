#pragma once
#include <Modloader/app/structs/MusicSource.h>
#include <Modloader/app/structs/MusicSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicSource {
        inline app::MusicSource__Class** type_info() {
            static app::MusicSource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicSource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicSource__Class* get_class() {
            return il2cpp::get_class<app::MusicSource__Class>(type_info(), "", "MusicSource");
        }
        inline app::MusicSource* create() {
            return il2cpp::create_object<app::MusicSource>(get_class());
        }
    } // namespace MusicSource
} // namespace app::classes::types
