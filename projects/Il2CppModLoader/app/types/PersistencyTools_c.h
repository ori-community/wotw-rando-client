#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PersistencyTools_c {
        inline app::PersistencyTools_c__Class** type_info = (app::PersistencyTools_c__Class**)(modloader::win::memory::resolve_rva(0x04735F68));
        inline app::PersistencyTools_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PersistencyTools_c__Class>(type_info, "Moon.EditorTools.Persistency", "PersistencyTools", "<>c");
        }
        inline app::PersistencyTools_c* create() {
            return il2cpp::create_object<app::PersistencyTools_c>(get_class());
        }
    } // namespace PersistencyTools_c
} // namespace app::classes::types
