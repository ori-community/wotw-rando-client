#pragma once
#include <Modloader/app/structs/FileStream_WriteDelegate.h>
#include <Modloader/app/structs/FileStream_WriteDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileStream_WriteDelegate {
        inline app::FileStream_WriteDelegate__Class** type_info() {
            static app::FileStream_WriteDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileStream_WriteDelegate__Class**)(modloader::win::memory::resolve_rva(0x0475AC30));
            }
            return cache;
        }
        inline app::FileStream_WriteDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::FileStream_WriteDelegate__Class>(type_info(), "System.IO", "FileStream", "WriteDelegate");
        }
        inline app::FileStream_WriteDelegate* create() {
            return il2cpp::create_object<app::FileStream_WriteDelegate>(get_class());
        }
    } // namespace FileStream_WriteDelegate
} // namespace app::classes::types
