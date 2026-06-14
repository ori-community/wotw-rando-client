#pragma once
#include <Modloader/app/structs/NintendoSaveFileSystemAsync.h>
#include <Modloader/app/structs/NintendoSaveFileSystemAsync__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoSaveFileSystemAsync {
        inline app::NintendoSaveFileSystemAsync__Class** type_info() {
            static app::NintendoSaveFileSystemAsync__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NintendoSaveFileSystemAsync__Class**)(modloader::win::memory::resolve_rva(0x0478B9B0));
            }
            return cache;
        }
        inline app::NintendoSaveFileSystemAsync__Class* get_class() {
            return il2cpp::get_class<app::NintendoSaveFileSystemAsync__Class>(type_info(), "", "NintendoSaveFileSystemAsync");
        }
        inline app::NintendoSaveFileSystemAsync* create() {
            return il2cpp::create_object<app::NintendoSaveFileSystemAsync>(get_class());
        }
    } // namespace NintendoSaveFileSystemAsync
} // namespace app::classes::types
