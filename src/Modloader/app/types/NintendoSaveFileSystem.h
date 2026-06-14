#pragma once
#include <Modloader/app/structs/NintendoSaveFileSystem.h>
#include <Modloader/app/structs/NintendoSaveFileSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoSaveFileSystem {
        inline app::NintendoSaveFileSystem__Class** type_info() {
            static app::NintendoSaveFileSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NintendoSaveFileSystem__Class**)(modloader::win::memory::resolve_rva(0x04780D88));
            }
            return cache;
        }
        inline app::NintendoSaveFileSystem__Class* get_class() {
            return il2cpp::get_class<app::NintendoSaveFileSystem__Class>(type_info(), "", "NintendoSaveFileSystem");
        }
        inline app::NintendoSaveFileSystem* create() {
            return il2cpp::create_object<app::NintendoSaveFileSystem>(get_class());
        }
    } // namespace NintendoSaveFileSystem
} // namespace app::classes::types
