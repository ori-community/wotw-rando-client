#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MapMakerGiveMapBehaviour {
        namespace {
            inline app::MapMakerGiveMapBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MapMakerGiveMapBehaviour__Class** type_info = &type_info_ref;
        inline app::MapMakerGiveMapBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerGiveMapBehaviour__Class>(type_info, "Moon", "MapMakerGiveMapBehaviour");
        }
        inline app::MapMakerGiveMapBehaviour* create() {
            return il2cpp::create_object<app::MapMakerGiveMapBehaviour>(get_class());
        }
    } // namespace MapMakerGiveMapBehaviour
} // namespace app::classes::types
