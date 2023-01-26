#pragma once
#include <Modloader/app/structs/EOverlayToStoreFlag__Enum.h>
#include <Modloader/app/structs/EOverlayToStoreFlag__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EOverlayToStoreFlag__Enum {
        inline app::EOverlayToStoreFlag__Enum__Class** type_info() {
            static app::EOverlayToStoreFlag__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EOverlayToStoreFlag__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EOverlayToStoreFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::EOverlayToStoreFlag__Enum__Class>(type_info(), "Steamworks", "EOverlayToStoreFlag");
        }
        inline app::EOverlayToStoreFlag__Enum* create() {
            return il2cpp::create_object<app::EOverlayToStoreFlag__Enum>(get_class());
        }
    } // namespace EOverlayToStoreFlag__Enum
} // namespace app::classes::types
