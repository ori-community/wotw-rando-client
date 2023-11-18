#pragma once
#include <Modloader/app/structs/TextAsset.h>
#include <Modloader/app/structs/TextAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextAsset {
        inline app::TextAsset__Class** type_info() {
            static app::TextAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextAsset__Class**)(modloader::win::memory::resolve_rva(0x0470FDB0));
            }
            return cache;
        }
        inline app::TextAsset__Class* get_class() {
            return il2cpp::get_class<app::TextAsset__Class>(type_info(), "UnityEngine", "TextAsset");
        }
        inline app::TextAsset* create() {
            return il2cpp::create_object<app::TextAsset>(get_class());
        }
    } // namespace TextAsset
} // namespace app::classes::types
