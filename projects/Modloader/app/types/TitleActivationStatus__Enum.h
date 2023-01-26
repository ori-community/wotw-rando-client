#pragma once
#include <Modloader/app/structs/TitleActivationStatus__Enum.h>
#include <Modloader/app/structs/TitleActivationStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleActivationStatus__Enum {
        inline app::TitleActivationStatus__Enum__Class** type_info() {
            static app::TitleActivationStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TitleActivationStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04774EC0));
            }
            return cache;
        }
        inline app::TitleActivationStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TitleActivationStatus__Enum__Class>(type_info(), "PlayFab.ClientModels", "TitleActivationStatus");
        }
        inline app::TitleActivationStatus__Enum* create() {
            return il2cpp::create_object<app::TitleActivationStatus__Enum>(get_class());
        }
    } // namespace TitleActivationStatus__Enum
} // namespace app::classes::types
