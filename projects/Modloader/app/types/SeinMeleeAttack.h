#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinMeleeAttack__Class.h>
#include <Modloader/app/structs/SeinMeleeAttack.h>

namespace app::classes::types {
    namespace SeinMeleeAttack {
        inline app::SeinMeleeAttack__Class** type_info = (app::SeinMeleeAttack__Class**)(modloader::win::memory::resolve_rva(0x047335E8));
        inline app::SeinMeleeAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinMeleeAttack__Class>(type_info, "", "SeinMeleeAttack");
        }
        inline app::SeinMeleeAttack* create() {
            return il2cpp::create_object<app::SeinMeleeAttack>(get_class());
        }
    } // namespace SeinMeleeAttack
} // namespace app::classes::types
