#pragma once
#include <Modloader/app/structs/PlayLoopAnimation_c.h>
#include <Modloader/app/structs/PlayLoopAnimation_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayLoopAnimation_c {
        inline app::PlayLoopAnimation_c__Class** type_info() {
            static app::PlayLoopAnimation_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayLoopAnimation_c__Class**)(modloader::win::memory::resolve_rva(0x04787B10));
            }
            return cache;
        }
        inline app::PlayLoopAnimation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayLoopAnimation_c__Class>(type_info(), "", "PlayLoopAnimation", "<>c");
        }
        inline app::PlayLoopAnimation_c* create() {
            return il2cpp::create_object<app::PlayLoopAnimation_c>(get_class());
        }
    } // namespace PlayLoopAnimation_c
} // namespace app::classes::types
