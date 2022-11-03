#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MapMakerInteractionBehaviour {
        namespace {
            inline app::MapMakerInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MapMakerInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::MapMakerInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerInteractionBehaviour__Class>(type_info, "Moon", "MapMakerInteractionBehaviour");
        }
        inline app::MapMakerInteractionBehaviour* create() {
            return il2cpp::create_object<app::MapMakerInteractionBehaviour>(get_class());
        }
    } // namespace MapMakerInteractionBehaviour
} // namespace app::classes::types
