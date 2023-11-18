#pragma once
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_States.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossButtSlamBehaviour_States {
        inline app::KwolokBossButtSlamBehaviour_States__Class** type_info() {
            static app::KwolokBossButtSlamBehaviour_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossButtSlamBehaviour_States__Class**)(modloader::win::memory::resolve_rva(0x0474B838));
            }
            return cache;
        }
        inline app::KwolokBossButtSlamBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossButtSlamBehaviour_States__Class>(type_info(), "", "KwolokBossButtSlamBehaviour", "States");
        }
        inline app::KwolokBossButtSlamBehaviour_States* create() {
            return il2cpp::create_object<app::KwolokBossButtSlamBehaviour_States>(get_class());
        }
    } // namespace KwolokBossButtSlamBehaviour_States
} // namespace app::classes::types
