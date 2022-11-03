#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArtKitLink {
        namespace {
            inline app::ArtKitLink__Class* type_info_ref = nullptr;
        }
        inline app::ArtKitLink__Class** type_info = &type_info_ref;
        inline app::ArtKitLink__Class* get_class() {
            return il2cpp::get_class<app::ArtKitLink__Class>(type_info, "Moon.EditorTools.ArtKit", "ArtKitLink");
        }
        inline app::ArtKitLink* create() {
            return il2cpp::create_object<app::ArtKitLink>(get_class());
        }
    } // namespace ArtKitLink
} // namespace app::classes::types
