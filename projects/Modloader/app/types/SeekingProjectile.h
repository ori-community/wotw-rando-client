#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeekingProjectile {
        inline app::SeekingProjectile__Class** type_info = (app::SeekingProjectile__Class**)(modloader::win::memory::resolve_rva(0x047311B0));
        inline app::SeekingProjectile__Class* get_class() {
            return il2cpp::get_class<app::SeekingProjectile__Class>(type_info, "", "SeekingProjectile");
        }
        inline app::SeekingProjectile* create() {
            return il2cpp::create_object<app::SeekingProjectile>(get_class());
        }
    } // namespace SeekingProjectile
} // namespace app::classes::types
