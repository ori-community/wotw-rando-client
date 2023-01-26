#pragma once
#include <Modloader/app/structs/Encoding_DefaultDecoder.h>
#include <Modloader/app/structs/Encoding_DefaultDecoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Encoding_DefaultDecoder {
        inline app::Encoding_DefaultDecoder__Class** type_info() {
            static app::Encoding_DefaultDecoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Encoding_DefaultDecoder__Class**)(modloader::win::memory::resolve_rva(0x04794B08));
            }
            return cache;
        }
        inline app::Encoding_DefaultDecoder__Class* get_class() {
            return il2cpp::get_nested_class<app::Encoding_DefaultDecoder__Class>(type_info(), "System.Text", "Encoding", "DefaultDecoder");
        }
        inline app::Encoding_DefaultDecoder* create() {
            return il2cpp::create_object<app::Encoding_DefaultDecoder>(get_class());
        }
    } // namespace Encoding_DefaultDecoder
} // namespace app::classes::types
