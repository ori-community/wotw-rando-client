#pragma once
#include <Modloader/app/structs/ImmutableCollectionsUtils_c_DisplayClass25_0.h>
#include <Modloader/app/structs/ImmutableCollectionsUtils_c_DisplayClass25_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ImmutableCollectionsUtils_c_DisplayClass25_0 {
        inline app::ImmutableCollectionsUtils_c_DisplayClass25_0__Class** type_info() {
            static app::ImmutableCollectionsUtils_c_DisplayClass25_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ImmutableCollectionsUtils_c_DisplayClass25_0__Class**)(modloader::win::memory::resolve_rva(0x0477C618));
            }
            return cache;
        }
        inline app::ImmutableCollectionsUtils_c_DisplayClass25_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ImmutableCollectionsUtils_c_DisplayClass25_0__Class>(type_info(), "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils", "<>c__DisplayClass25_0");
        }
        inline app::ImmutableCollectionsUtils_c_DisplayClass25_0* create() {
            return il2cpp::create_object<app::ImmutableCollectionsUtils_c_DisplayClass25_0>(get_class());
        }
    } // namespace ImmutableCollectionsUtils_c_DisplayClass25_0
} // namespace app::classes::types
