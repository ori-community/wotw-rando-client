#pragma once
#include <Modloader/app/structs/DirectoryNotFoundException.h>
#include <Modloader/app/structs/DirectoryNotFoundException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectoryNotFoundException {
        inline app::DirectoryNotFoundException__Class** type_info() {
            static app::DirectoryNotFoundException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DirectoryNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04773F98));
            }
            return cache;
        }
        inline app::DirectoryNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::DirectoryNotFoundException__Class>(type_info(), "System.IO", "DirectoryNotFoundException");
        }
        inline app::DirectoryNotFoundException* create() {
            return il2cpp::create_object<app::DirectoryNotFoundException>(get_class());
        }
    } // namespace DirectoryNotFoundException
} // namespace app::classes::types
