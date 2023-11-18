#pragma once
#include <Modloader/app/structs/AcidSlugEnemy_c.h>
#include <Modloader/app/structs/AcidSlugEnemy_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcidSlugEnemy_c {
        inline app::AcidSlugEnemy_c__Class** type_info() {
            static app::AcidSlugEnemy_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AcidSlugEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x04779168));
            }
            return cache;
        }
        inline app::AcidSlugEnemy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AcidSlugEnemy_c__Class>(type_info(), "", "AcidSlugEnemy", "<>c");
        }
        inline app::AcidSlugEnemy_c* create() {
            return il2cpp::create_object<app::AcidSlugEnemy_c>(get_class());
        }
    } // namespace AcidSlugEnemy_c
} // namespace app::classes::types
