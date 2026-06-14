#pragma once
#include <Modloader/app/structs/AVProWindowsMediaManager.h>
#include <Modloader/app/structs/AVProWindowsMediaManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaManager {
        inline app::AVProWindowsMediaManager__Class** type_info() {
            static app::AVProWindowsMediaManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AVProWindowsMediaManager__Class**)(modloader::win::memory::resolve_rva(0x047335D8));
            }
            return cache;
        }
        inline app::AVProWindowsMediaManager__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaManager__Class>(type_info(), "", "AVProWindowsMediaManager");
        }
        inline app::AVProWindowsMediaManager* create() {
            return il2cpp::create_object<app::AVProWindowsMediaManager>(get_class());
        }
    } // namespace AVProWindowsMediaManager
} // namespace app::classes::types
