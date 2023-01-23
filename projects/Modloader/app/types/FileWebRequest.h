#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FileWebRequest__Class.h>
#include <Modloader/app/structs/FileWebRequest.h>

namespace app::classes::types {
    namespace FileWebRequest {
        inline app::FileWebRequest__Class** type_info = (app::FileWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04704818));
        inline app::FileWebRequest__Class* get_class() {
            return il2cpp::get_class<app::FileWebRequest__Class>(type_info, "System.Net", "FileWebRequest");
        }
        inline app::FileWebRequest* create() {
            return il2cpp::create_object<app::FileWebRequest>(get_class());
        }
    } // namespace FileWebRequest
} // namespace app::classes::types
