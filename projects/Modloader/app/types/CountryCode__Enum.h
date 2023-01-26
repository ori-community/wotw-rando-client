#pragma once
#include <Modloader/app/structs/CountryCode__Enum.h>
#include <Modloader/app/structs/CountryCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CountryCode__Enum {
        inline app::CountryCode__Enum__Class** type_info() {
            static app::CountryCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CountryCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047554E8));
            }
            return cache;
        }
        inline app::CountryCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CountryCode__Enum__Class>(type_info(), "PlayFab.ClientModels", "CountryCode");
        }
        inline app::CountryCode__Enum* create() {
            return il2cpp::create_object<app::CountryCode__Enum>(get_class());
        }
    } // namespace CountryCode__Enum
} // namespace app::classes::types
