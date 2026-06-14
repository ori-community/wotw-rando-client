#pragma once
#include <Modloader/app/structs/IncrementalReadDummyDecoder.h>
#include <Modloader/app/structs/IncrementalReadDummyDecoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IncrementalReadDummyDecoder {
        inline app::IncrementalReadDummyDecoder__Class** type_info() {
            static app::IncrementalReadDummyDecoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IncrementalReadDummyDecoder__Class**)(modloader::win::memory::resolve_rva(0x0478E820));
            }
            return cache;
        }
        inline app::IncrementalReadDummyDecoder__Class* get_class() {
            return il2cpp::get_class<app::IncrementalReadDummyDecoder__Class>(type_info(), "System.Xml", "IncrementalReadDummyDecoder");
        }
        inline app::IncrementalReadDummyDecoder* create() {
            return il2cpp::create_object<app::IncrementalReadDummyDecoder>(get_class());
        }
    } // namespace IncrementalReadDummyDecoder
} // namespace app::classes::types
