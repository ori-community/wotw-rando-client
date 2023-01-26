#pragma once
#include <Modloader/app/structs/Stream_c.h>
#include <Modloader/app/structs/Stream_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Stream_c {
        inline app::Stream_c__Class** type_info() {
            static app::Stream_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Stream_c__Class**)(modloader::win::memory::resolve_rva(0x0474F9F0));
            }
            return cache;
        }
        inline app::Stream_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_c__Class>(type_info(), "System.IO", "Stream", "<>c");
        }
        inline app::Stream_c* create() {
            return il2cpp::create_object<app::Stream_c>(get_class());
        }
    } // namespace Stream_c
} // namespace app::classes::types
