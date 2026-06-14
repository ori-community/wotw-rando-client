#pragma once
#include <Modloader/app/structs/StickyMine.h>
#include <Modloader/app/structs/StickyMine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StickyMine {
        inline app::StickyMine__Class** type_info() {
            static app::StickyMine__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StickyMine__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StickyMine__Class* get_class() {
            return il2cpp::get_class<app::StickyMine__Class>(type_info(), "", "StickyMine");
        }
        inline app::StickyMine* create() {
            return il2cpp::create_object<app::StickyMine>(get_class());
        }
    } // namespace StickyMine
} // namespace app::classes::types
