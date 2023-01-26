#pragma once
#include <Modloader/app/structs/FrameInfo__Array.h>
#include <Modloader/app/structs/FrameInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameInfo__Array {
        inline app::FrameInfo__Array__Class** type_info() {
            static app::FrameInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04797428));
            }
            return cache;
        }
        inline app::FrameInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FrameInfo__Array__Class>(type_info(), "", "FrameInfo[]");
        }
        inline app::FrameInfo__Array* create() {
            return il2cpp::create_object<app::FrameInfo__Array>(get_class());
        }
    } // namespace FrameInfo__Array
} // namespace app::classes::types
