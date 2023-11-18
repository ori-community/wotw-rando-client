#pragma once
#include <Modloader/app/structs/CopyEncoder.h>
#include <Modloader/app/structs/CopyEncoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CopyEncoder {
        inline app::CopyEncoder__Class** type_info() {
            static app::CopyEncoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CopyEncoder__Class**)(modloader::win::memory::resolve_rva(0x04739AD0));
            }
            return cache;
        }
        inline app::CopyEncoder__Class* get_class() {
            return il2cpp::get_class<app::CopyEncoder__Class>(type_info(), "Unity.IO.Compression", "CopyEncoder");
        }
        inline app::CopyEncoder* create() {
            return il2cpp::create_object<app::CopyEncoder>(get_class());
        }
    } // namespace CopyEncoder
} // namespace app::classes::types
