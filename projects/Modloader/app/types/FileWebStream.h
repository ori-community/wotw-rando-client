#pragma once
#include <Modloader/app/structs/FileWebStream.h>
#include <Modloader/app/structs/FileWebStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileWebStream {
        inline app::FileWebStream__Class** type_info() {
            static app::FileWebStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileWebStream__Class**)(modloader::win::memory::resolve_rva(0x0470B160));
            }
            return cache;
        }
        inline app::FileWebStream__Class* get_class() {
            return il2cpp::get_class<app::FileWebStream__Class>(type_info(), "System.Net", "FileWebStream");
        }
        inline app::FileWebStream* create() {
            return il2cpp::create_object<app::FileWebStream>(get_class());
        }
    } // namespace FileWebStream
} // namespace app::classes::types
