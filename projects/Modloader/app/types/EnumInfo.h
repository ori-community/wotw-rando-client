#pragma once
#include <Modloader/app/structs/EnumInfo.h>
#include <Modloader/app/structs/EnumInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnumInfo {
        inline app::EnumInfo__Class** type_info() {
            static app::EnumInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnumInfo__Class**)(modloader::win::memory::resolve_rva(0x047684C0));
            }
            return cache;
        }
        inline app::EnumInfo__Class* get_class() {
            return il2cpp::get_class<app::EnumInfo__Class>(type_info(), "Newtonsoft.Json.Utilities", "EnumInfo");
        }
        inline app::EnumInfo* create() {
            return il2cpp::create_object<app::EnumInfo>(get_class());
        }
    } // namespace EnumInfo
} // namespace app::classes::types
