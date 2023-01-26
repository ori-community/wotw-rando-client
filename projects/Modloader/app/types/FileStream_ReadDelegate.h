#pragma once
#include <Modloader/app/structs/FileStream_ReadDelegate.h>
#include <Modloader/app/structs/FileStream_ReadDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileStream_ReadDelegate {
        inline app::FileStream_ReadDelegate__Class** type_info() {
            static app::FileStream_ReadDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileStream_ReadDelegate__Class**)(modloader::win::memory::resolve_rva(0x04792610));
            }
            return cache;
        }
        inline app::FileStream_ReadDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::FileStream_ReadDelegate__Class>(type_info(), "System.IO", "FileStream", "ReadDelegate");
        }
        inline app::FileStream_ReadDelegate* create() {
            return il2cpp::create_object<app::FileStream_ReadDelegate>(get_class());
        }
    } // namespace FileStream_ReadDelegate
} // namespace app::classes::types
