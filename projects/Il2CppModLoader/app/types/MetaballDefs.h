#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MetaballDefs {
        inline app::MetaballDefs__Class** type_info = (app::MetaballDefs__Class**)(modloader::win::memory::resolve_rva(0x04770130));
        inline app::MetaballDefs__Class* get_class() {
            return il2cpp::get_class<app::MetaballDefs__Class>(type_info, "Metaballs2D", "MetaballDefs");
        }
        inline app::MetaballDefs* create() {
            return il2cpp::create_object<app::MetaballDefs>(get_class());
        }
    } // namespace MetaballDefs
} // namespace app::classes::types
