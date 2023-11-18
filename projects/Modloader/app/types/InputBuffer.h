#pragma once
#include <Modloader/app/structs/InputBuffer.h>
#include <Modloader/app/structs/InputBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputBuffer {
        inline app::InputBuffer__Class** type_info() {
            static app::InputBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputBuffer__Class**)(modloader::win::memory::resolve_rva(0x0475FDC0));
            }
            return cache;
        }
        inline app::InputBuffer__Class* get_class() {
            return il2cpp::get_class<app::InputBuffer__Class>(type_info(), "Unity.IO.Compression", "InputBuffer");
        }
        inline app::InputBuffer* create() {
            return il2cpp::create_object<app::InputBuffer>(get_class());
        }
    } // namespace InputBuffer
} // namespace app::classes::types
