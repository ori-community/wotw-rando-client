#pragma once
#include <Modloader/app/structs/FileProcessor.h>
#include <Modloader/app/structs/FileProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileProcessor {
        inline app::FileProcessor__Class** type_info() {
            static app::FileProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileProcessor__Class**)(modloader::win::memory::resolve_rva(0x04763BC8));
            }
            return cache;
        }
        inline app::FileProcessor__Class* get_class() {
            return il2cpp::get_class<app::FileProcessor__Class>(type_info(), "TriangleNet.IO", "FileProcessor");
        }
        inline app::FileProcessor* create() {
            return il2cpp::create_object<app::FileProcessor>(get_class());
        }
    } // namespace FileProcessor
} // namespace app::classes::types
