#pragma once
#include <Modloader/app/structs/ArmouredRammingEnemy_c.h>
#include <Modloader/app/structs/ArmouredRammingEnemy_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArmouredRammingEnemy_c {
        inline app::ArmouredRammingEnemy_c__Class** type_info() {
            static app::ArmouredRammingEnemy_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArmouredRammingEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x0472E410));
            }
            return cache;
        }
        inline app::ArmouredRammingEnemy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ArmouredRammingEnemy_c__Class>(type_info(), "", "ArmouredRammingEnemy", "<>c");
        }
        inline app::ArmouredRammingEnemy_c* create() {
            return il2cpp::create_object<app::ArmouredRammingEnemy_c>(get_class());
        }
    } // namespace ArmouredRammingEnemy_c
} // namespace app::classes::types
