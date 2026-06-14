#pragma once
#include <Modloader/app/structs/NPCMessageBoxWrapper.h>
#include <Modloader/app/structs/NPCMessageBoxWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCMessageBoxWrapper {
        inline app::NPCMessageBoxWrapper__Class** type_info() {
            static app::NPCMessageBoxWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NPCMessageBoxWrapper__Class**)(modloader::win::memory::resolve_rva(0x0474AB98));
            }
            return cache;
        }
        inline app::NPCMessageBoxWrapper__Class* get_class() {
            return il2cpp::get_class<app::NPCMessageBoxWrapper__Class>(type_info(), "", "NPCMessageBoxWrapper");
        }
        inline app::NPCMessageBoxWrapper* create() {
            return il2cpp::create_object<app::NPCMessageBoxWrapper>(get_class());
        }
    } // namespace NPCMessageBoxWrapper
} // namespace app::classes::types
