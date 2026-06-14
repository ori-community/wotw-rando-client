#pragma once
#include <Modloader/app/structs/ContinentCode__Enum.h>
#include <Modloader/app/structs/ContinentCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContinentCode__Enum {
        inline app::ContinentCode__Enum__Class** type_info() {
            static app::ContinentCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContinentCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04726B10));
            }
            return cache;
        }
        inline app::ContinentCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ContinentCode__Enum__Class>(type_info(), "PlayFab.ClientModels", "ContinentCode");
        }
        inline app::ContinentCode__Enum* create() {
            return il2cpp::create_object<app::ContinentCode__Enum>(get_class());
        }
    } // namespace ContinentCode__Enum
} // namespace app::classes::types
