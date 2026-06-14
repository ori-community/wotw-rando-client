#pragma once
#include <Modloader/app/structs/MetaballDefs.h>
#include <Modloader/app/structs/MetaballDefs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MetaballDefs {
        inline app::MetaballDefs__Class** type_info() {
            static app::MetaballDefs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MetaballDefs__Class**)(modloader::win::memory::resolve_rva(0x04770130));
            }
            return cache;
        }
        inline app::MetaballDefs__Class* get_class() {
            return il2cpp::get_class<app::MetaballDefs__Class>(type_info(), "Metaballs2D", "MetaballDefs");
        }
        inline app::MetaballDefs* create() {
            return il2cpp::create_object<app::MetaballDefs>(get_class());
        }
    } // namespace MetaballDefs
} // namespace app::classes::types
