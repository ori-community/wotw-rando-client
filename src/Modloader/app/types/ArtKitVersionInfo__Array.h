#pragma once
#include <Modloader/app/structs/ArtKitVersionInfo__Array.h>
#include <Modloader/app/structs/ArtKitVersionInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtKitVersionInfo__Array {
        inline app::ArtKitVersionInfo__Array__Class** type_info() {
            static app::ArtKitVersionInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArtKitVersionInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArtKitVersionInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::ArtKitVersionInfo__Array__Class>(type_info(), "Moon.EditorTools.ArtKit", "ArtKitVersionInfo[]");
        }
        inline app::ArtKitVersionInfo__Array* create() {
            return il2cpp::create_object<app::ArtKitVersionInfo__Array>(get_class());
        }
    } // namespace ArtKitVersionInfo__Array
} // namespace app::classes::types
