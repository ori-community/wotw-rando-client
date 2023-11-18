#pragma once
#include <Modloader/app/structs/BTPrefs.h>
#include <Modloader/app/structs/BTPrefs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BTPrefs {
        inline app::BTPrefs__Class** type_info() {
            static app::BTPrefs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BTPrefs__Class**)(modloader::win::memory::resolve_rva(0x0471D220));
            }
            return cache;
        }
        inline app::BTPrefs__Class* get_class() {
            return il2cpp::get_class<app::BTPrefs__Class>(type_info(), "Moon.BehaviourSystem.BTEditor", "BTPrefs");
        }
        inline app::BTPrefs* create() {
            return il2cpp::create_object<app::BTPrefs>(get_class());
        }
    } // namespace BTPrefs
} // namespace app::classes::types
