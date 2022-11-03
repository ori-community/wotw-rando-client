#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleActivationStatus__Enum {
        inline app::TitleActivationStatus__Enum__Class** type_info = (app::TitleActivationStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04774EC0));
        inline app::TitleActivationStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TitleActivationStatus__Enum__Class>(type_info, "PlayFab.ClientModels", "TitleActivationStatus");
        }
        inline app::TitleActivationStatus__Enum* create() {
            return il2cpp::create_object<app::TitleActivationStatus__Enum>(get_class());
        }
    } // namespace TitleActivationStatus__Enum
} // namespace app::classes::types
