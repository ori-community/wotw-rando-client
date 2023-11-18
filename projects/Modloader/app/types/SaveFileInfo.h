#pragma once
#include <Modloader/app/structs/SaveFileInfo.h>
#include <Modloader/app/structs/SaveFileInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveFileInfo {
        inline app::SaveFileInfo__Class** type_info() {
            static app::SaveFileInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SaveFileInfo__Class**)(modloader::win::memory::resolve_rva(0x04731E00));
            }
            return cache;
        }
        inline app::SaveFileInfo__Class* get_class() {
            return il2cpp::get_class<app::SaveFileInfo__Class>(type_info(), "", "SaveFileInfo");
        }
        inline app::SaveFileInfo* create() {
            return il2cpp::create_object<app::SaveFileInfo>(get_class());
        }
    } // namespace SaveFileInfo
} // namespace app::classes::types
