#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ImmutableCollectionsUtils_c_DisplayClass25_0 {
        inline app::ImmutableCollectionsUtils_c_DisplayClass25_0__Class** type_info = (app::ImmutableCollectionsUtils_c_DisplayClass25_0__Class**)(modloader::win::memory::resolve_rva(0x0477C618));
        inline app::ImmutableCollectionsUtils_c_DisplayClass25_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ImmutableCollectionsUtils_c_DisplayClass25_0__Class>(type_info, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils", "<>c__DisplayClass25_0");
        }
        inline app::ImmutableCollectionsUtils_c_DisplayClass25_0* create() {
            return il2cpp::create_object<app::ImmutableCollectionsUtils_c_DisplayClass25_0>(get_class());
        }
    } // namespace ImmutableCollectionsUtils_c_DisplayClass25_0
} // namespace app::classes::types
