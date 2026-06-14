#pragma once
#include <Modloader/app/structs/SeekingProjectile.h>
#include <Modloader/app/structs/SeekingProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeekingProjectile {
        inline app::SeekingProjectile__Class** type_info() {
            static app::SeekingProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeekingProjectile__Class**)(modloader::win::memory::resolve_rva(0x047311B0));
            }
            return cache;
        }
        inline app::SeekingProjectile__Class* get_class() {
            return il2cpp::get_class<app::SeekingProjectile__Class>(type_info(), "", "SeekingProjectile");
        }
        inline app::SeekingProjectile* create() {
            return il2cpp::create_object<app::SeekingProjectile>(get_class());
        }
    } // namespace SeekingProjectile
} // namespace app::classes::types
