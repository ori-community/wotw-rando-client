#pragma once
#include <Modloader/app/structs/SeinBashAttack.h>
#include <Modloader/app/structs/SeinBashAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBashAttack {
        inline app::SeinBashAttack__Class** type_info() {
            static app::SeinBashAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinBashAttack__Class**)(modloader::win::memory::resolve_rva(0x04781EE0));
            }
            return cache;
        }
        inline app::SeinBashAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinBashAttack__Class>(type_info(), "", "SeinBashAttack");
        }
        inline app::SeinBashAttack* create() {
            return il2cpp::create_object<app::SeinBashAttack>(get_class());
        }
    } // namespace SeinBashAttack
} // namespace app::classes::types
