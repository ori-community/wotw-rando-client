#pragma once
#include <Modloader/app/structs/ImmutableCollectionsUtils_c.h>
#include <Modloader/app/structs/ImmutableCollectionsUtils_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ImmutableCollectionsUtils_c {
        inline app::ImmutableCollectionsUtils_c__Class** type_info() {
            static app::ImmutableCollectionsUtils_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ImmutableCollectionsUtils_c__Class**)(modloader::win::memory::resolve_rva(0x0470BC38));
            }
            return cache;
        }
        inline app::ImmutableCollectionsUtils_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ImmutableCollectionsUtils_c__Class>(type_info(), "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils", "<>c");
        }
        inline app::ImmutableCollectionsUtils_c* create() {
            return il2cpp::create_object<app::ImmutableCollectionsUtils_c>(get_class());
        }
    } // namespace ImmutableCollectionsUtils_c
} // namespace app::classes::types
