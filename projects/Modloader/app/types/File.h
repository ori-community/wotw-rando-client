#pragma once
#include <Modloader/app/structs/File.h>
#include <Modloader/app/structs/File__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace File {
        inline app::File__Class** type_info() {
            static app::File__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::File__Class**)(modloader::win::memory::resolve_rva(0x04738460));
            }
            return cache;
        }
        inline app::File__Class* get_class() {
            return il2cpp::get_class<app::File__Class>(type_info(), "System.IO", "File");
        }
        inline app::File* create() {
            return il2cpp::create_object<app::File>(get_class());
        }
    } // namespace File
} // namespace app::classes::types
