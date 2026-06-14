#pragma once
#include <Modloader/app/structs/DeflateManager_CompressFunc.h>
#include <Modloader/app/structs/DeflateManager_CompressFunc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeflateManager_CompressFunc {
        inline app::DeflateManager_CompressFunc__Class** type_info() {
            static app::DeflateManager_CompressFunc__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeflateManager_CompressFunc__Class**)(modloader::win::memory::resolve_rva(0x04756818));
            }
            return cache;
        }
        inline app::DeflateManager_CompressFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateManager_CompressFunc__Class>(type_info(), "Ionic.Zlib", "DeflateManager", "CompressFunc");
        }
        inline app::DeflateManager_CompressFunc* create() {
            return il2cpp::create_object<app::DeflateManager_CompressFunc>(get_class());
        }
    } // namespace DeflateManager_CompressFunc
} // namespace app::classes::types
