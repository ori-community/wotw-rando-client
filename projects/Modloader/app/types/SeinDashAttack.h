#pragma once
#include <Modloader/app/structs/SeinDashAttack.h>
#include <Modloader/app/structs/SeinDashAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDashAttack {
        inline app::SeinDashAttack__Class** type_info() {
            static app::SeinDashAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDashAttack__Class**)(modloader::win::memory::resolve_rva(0x04775698));
            }
            return cache;
        }
        inline app::SeinDashAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinDashAttack__Class>(type_info(), "", "SeinDashAttack");
        }
        inline app::SeinDashAttack* create() {
            return il2cpp::create_object<app::SeinDashAttack>(get_class());
        }
    } // namespace SeinDashAttack
} // namespace app::classes::types
