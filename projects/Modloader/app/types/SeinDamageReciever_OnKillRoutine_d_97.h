#pragma once
#include <Modloader/app/structs/SeinDamageReciever_OnKillRoutine_d_97.h>
#include <Modloader/app/structs/SeinDamageReciever_OnKillRoutine_d_97__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDamageReciever_OnKillRoutine_d_97 {
        inline app::SeinDamageReciever_OnKillRoutine_d_97__Class** type_info() {
            static app::SeinDamageReciever_OnKillRoutine_d_97__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDamageReciever_OnKillRoutine_d_97__Class**)(modloader::win::memory::resolve_rva(0x0474AA38));
            }
            return cache;
        }
        inline app::SeinDamageReciever_OnKillRoutine_d_97__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDamageReciever_OnKillRoutine_d_97__Class>(type_info(), "", "SeinDamageReciever", "<OnKillRoutine>d__97");
        }
        inline app::SeinDamageReciever_OnKillRoutine_d_97* create() {
            return il2cpp::create_object<app::SeinDamageReciever_OnKillRoutine_d_97>(get_class());
        }
    } // namespace SeinDamageReciever_OnKillRoutine_d_97
} // namespace app::classes::types
