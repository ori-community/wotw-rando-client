#pragma once
#include <Modloader/app/structs/PushPullBlock_c.h>
#include <Modloader/app/structs/PushPullBlock_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushPullBlock_c {
        inline app::PushPullBlock_c__Class** type_info() {
            static app::PushPullBlock_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PushPullBlock_c__Class**)(modloader::win::memory::resolve_rva(0x0473EDC8));
            }
            return cache;
        }
        inline app::PushPullBlock_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PushPullBlock_c__Class>(type_info(), "", "PushPullBlock", "<>c");
        }
        inline app::PushPullBlock_c* create() {
            return il2cpp::create_object<app::PushPullBlock_c>(get_class());
        }
    } // namespace PushPullBlock_c
} // namespace app::classes::types
