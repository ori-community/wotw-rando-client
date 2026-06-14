#pragma once
#include <Modloader/app/structs/SeinAttack.h>
#include <Modloader/app/structs/SeinAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAttack {
        inline app::SeinAttack__Class** type_info() {
            static app::SeinAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinAttack__Class>(type_info(), "", "SeinAttack");
        }
        inline app::SeinAttack* create() {
            return il2cpp::create_object<app::SeinAttack>(get_class());
        }
    } // namespace SeinAttack
} // namespace app::classes::types
