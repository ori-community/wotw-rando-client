#pragma once
#include <Modloader/app/structs/FileWebResponse.h>
#include <Modloader/app/structs/FileWebResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileWebResponse {
        inline app::FileWebResponse__Class** type_info() {
            static app::FileWebResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileWebResponse__Class**)(modloader::win::memory::resolve_rva(0x047065F0));
            }
            return cache;
        }
        inline app::FileWebResponse__Class* get_class() {
            return il2cpp::get_class<app::FileWebResponse__Class>(type_info(), "System.Net", "FileWebResponse");
        }
        inline app::FileWebResponse* create() {
            return il2cpp::create_object<app::FileWebResponse>(get_class());
        }
    } // namespace FileWebResponse
} // namespace app::classes::types
