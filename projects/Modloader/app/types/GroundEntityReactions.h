#pragma once
#include <Modloader/app/structs/GroundEntityReactions.h>
#include <Modloader/app/structs/GroundEntityReactions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundEntityReactions {
        inline app::GroundEntityReactions__Class** type_info() {
            static app::GroundEntityReactions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GroundEntityReactions__Class**)(modloader::win::memory::resolve_rva(0x04777100));
            }
            return cache;
        }
        inline app::GroundEntityReactions__Class* get_class() {
            return il2cpp::get_class<app::GroundEntityReactions__Class>(type_info(), "", "GroundEntityReactions");
        }
        inline app::GroundEntityReactions* create() {
            return il2cpp::create_object<app::GroundEntityReactions>(get_class());
        }
    } // namespace GroundEntityReactions
} // namespace app::classes::types
