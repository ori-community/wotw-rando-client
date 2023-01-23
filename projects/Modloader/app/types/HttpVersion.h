#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpVersion__Class.h>
#include <Modloader/app/structs/HttpVersion.h>

namespace app::classes::types {
    namespace HttpVersion {
        inline app::HttpVersion__Class** type_info = (app::HttpVersion__Class**)(modloader::win::memory::resolve_rva(0x0471B0C8));
        inline app::HttpVersion__Class* get_class() {
            return il2cpp::get_class<app::HttpVersion__Class>(type_info, "System.Net", "HttpVersion");
        }
        inline app::HttpVersion* create() {
            return il2cpp::create_object<app::HttpVersion>(get_class());
        }
    } // namespace HttpVersion
} // namespace app::classes::types
