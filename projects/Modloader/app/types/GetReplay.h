#pragma once
#include <Modloader/app/structs/GetReplay.h>
#include <Modloader/app/structs/GetReplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetReplay {
        inline app::GetReplay__Class** type_info() {
            static app::GetReplay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetReplay__Class**)(modloader::win::memory::resolve_rva(0x04708C38));
            }
            return cache;
        }
        inline app::GetReplay__Class* get_class() {
            return il2cpp::get_class<app::GetReplay__Class>(type_info(), "", "GetReplay");
        }
        inline app::GetReplay* create() {
            return il2cpp::create_object<app::GetReplay>(get_class());
        }
    } // namespace GetReplay
} // namespace app::classes::types
