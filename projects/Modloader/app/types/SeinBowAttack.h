#pragma once
#include <Modloader/app/structs/SeinBowAttack.h>
#include <Modloader/app/structs/SeinBowAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBowAttack {
        inline app::SeinBowAttack__Class** type_info() {
            static app::SeinBowAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinBowAttack__Class**)(modloader::win::memory::resolve_rva(0x047396F0));
            }
            return cache;
        }
        inline app::SeinBowAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinBowAttack__Class>(type_info(), "", "SeinBowAttack");
        }
        inline app::SeinBowAttack* create() {
            return il2cpp::create_object<app::SeinBowAttack>(get_class());
        }
    } // namespace SeinBowAttack
} // namespace app::classes::types
