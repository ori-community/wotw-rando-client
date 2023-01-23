#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArtGroupComponent__Class.h>
#include <Modloader/app/structs/ArtGroupComponent.h>

namespace app::classes::types {
    namespace ArtGroupComponent {
        namespace {
            inline app::ArtGroupComponent__Class* type_info_ref = nullptr;
        }
        inline app::ArtGroupComponent__Class** type_info = &type_info_ref;
        inline app::ArtGroupComponent__Class* get_class() {
            return il2cpp::get_class<app::ArtGroupComponent__Class>(type_info, "Moon.EditorTools.SmartSelection", "ArtGroupComponent");
        }
        inline app::ArtGroupComponent* create() {
            return il2cpp::create_object<app::ArtGroupComponent>(get_class());
        }
    } // namespace ArtGroupComponent
} // namespace app::classes::types
