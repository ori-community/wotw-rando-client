#pragma once
#include <Modloader/app/structs/FileStream.h>
#include <Modloader/app/structs/FileStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileStream {
        inline app::FileStream__Class** type_info() {
            static app::FileStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileStream__Class**)(modloader::win::memory::resolve_rva(0x0476EBC0));
            }
            return cache;
        }
        inline app::FileStream__Class* get_class() {
            return il2cpp::get_class<app::FileStream__Class>(type_info(), "System.IO", "FileStream");
        }
        inline app::FileStream* create() {
            return il2cpp::create_object<app::FileStream>(get_class());
        }
    } // namespace FileStream
} // namespace app::classes::types
