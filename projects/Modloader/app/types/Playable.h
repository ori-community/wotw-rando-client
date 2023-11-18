#pragma once
#include <Modloader/app/structs/Playable.h>
#include <Modloader/app/structs/Playable__Boxed.h>
#include <Modloader/app/structs/Playable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Playable {
        inline app::Playable__Class** type_info() {
            static app::Playable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Playable__Class**)(modloader::win::memory::resolve_rva(0x0475E0A8));
            }
            return cache;
        }
        inline app::Playable__Class* get_class() {
            return il2cpp::get_class<app::Playable__Class>(type_info(), "UnityEngine.Playables", "Playable");
        }
        inline app::Playable* create() {
            return il2cpp::create_object<app::Playable>(get_class());
        }
        inline app::Playable__Boxed* box(app::Playable value) {
            return il2cpp::box_value<app::Playable__Boxed>(get_class(), value);
        }
    } // namespace Playable
} // namespace app::classes::types
