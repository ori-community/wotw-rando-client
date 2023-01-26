#pragma once
#include <Modloader/app/structs/AkExternalSourceInfo.h>
#include <Modloader/app/structs/AkExternalSourceInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkExternalSourceInfo {
        inline app::AkExternalSourceInfo__Class** type_info() {
            static app::AkExternalSourceInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkExternalSourceInfo__Class**)(modloader::win::memory::resolve_rva(0x04789A80));
            }
            return cache;
        }
        inline app::AkExternalSourceInfo__Class* get_class() {
            return il2cpp::get_class<app::AkExternalSourceInfo__Class>(type_info(), "", "AkExternalSourceInfo");
        }
        inline app::AkExternalSourceInfo* create() {
            return il2cpp::create_object<app::AkExternalSourceInfo>(get_class());
        }
    } // namespace AkExternalSourceInfo
} // namespace app::classes::types
