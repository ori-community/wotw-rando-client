#pragma once
#include <Modloader/app/structs/FileWebRequest.h>
#include <Modloader/app/structs/FileWebRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileWebRequest {
        inline app::FileWebRequest__Class** type_info() {
            static app::FileWebRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04704818));
            }
            return cache;
        }
        inline app::FileWebRequest__Class* get_class() {
            return il2cpp::get_class<app::FileWebRequest__Class>(type_info(), "System.Net", "FileWebRequest");
        }
        inline app::FileWebRequest* create() {
            return il2cpp::create_object<app::FileWebRequest>(get_class());
        }
    } // namespace FileWebRequest
} // namespace app::classes::types
