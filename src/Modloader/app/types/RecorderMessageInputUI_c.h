#pragma once
#include <Modloader/app/structs/RecorderMessageInputUI_c.h>
#include <Modloader/app/structs/RecorderMessageInputUI_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderMessageInputUI_c {
        inline app::RecorderMessageInputUI_c__Class** type_info() {
            static app::RecorderMessageInputUI_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecorderMessageInputUI_c__Class**)(modloader::win::memory::resolve_rva(0x0475ABA0));
            }
            return cache;
        }
        inline app::RecorderMessageInputUI_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RecorderMessageInputUI_c__Class>(type_info(), "", "RecorderMessageInputUI", "<>c");
        }
        inline app::RecorderMessageInputUI_c* create() {
            return il2cpp::create_object<app::RecorderMessageInputUI_c>(get_class());
        }
    } // namespace RecorderMessageInputUI_c
} // namespace app::classes::types
