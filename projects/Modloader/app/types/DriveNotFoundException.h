#pragma once
#include <Modloader/app/structs/DriveNotFoundException.h>
#include <Modloader/app/structs/DriveNotFoundException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DriveNotFoundException {
        inline app::DriveNotFoundException__Class** type_info() {
            static app::DriveNotFoundException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DriveNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x0478BB88));
            }
            return cache;
        }
        inline app::DriveNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::DriveNotFoundException__Class>(type_info(), "System.IO", "DriveNotFoundException");
        }
        inline app::DriveNotFoundException* create() {
            return il2cpp::create_object<app::DriveNotFoundException>(get_class());
        }
    } // namespace DriveNotFoundException
} // namespace app::classes::types
