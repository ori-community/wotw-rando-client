#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CountryCode__Enum {
        inline app::CountryCode__Enum__Class** type_info = (app::CountryCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047554E8));
        inline app::CountryCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CountryCode__Enum__Class>(type_info, "PlayFab.ClientModels", "CountryCode");
        }
        inline app::CountryCode__Enum* create() {
            return il2cpp::create_object<app::CountryCode__Enum>(get_class());
        }
    } // namespace CountryCode__Enum
} // namespace app::classes::types
