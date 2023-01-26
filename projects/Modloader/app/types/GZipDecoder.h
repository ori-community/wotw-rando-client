#pragma once
#include <Modloader/app/structs/GZipDecoder.h>
#include <Modloader/app/structs/GZipDecoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GZipDecoder {
        inline app::GZipDecoder__Class** type_info() {
            static app::GZipDecoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GZipDecoder__Class**)(modloader::win::memory::resolve_rva(0x0478F360));
            }
            return cache;
        }
        inline app::GZipDecoder__Class* get_class() {
            return il2cpp::get_class<app::GZipDecoder__Class>(type_info(), "Unity.IO.Compression", "GZipDecoder");
        }
        inline app::GZipDecoder* create() {
            return il2cpp::create_object<app::GZipDecoder>(get_class());
        }
    } // namespace GZipDecoder
} // namespace app::classes::types
