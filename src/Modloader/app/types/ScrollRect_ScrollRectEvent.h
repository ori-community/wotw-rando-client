#pragma once
#include <Modloader/app/structs/ScrollRect_ScrollRectEvent.h>
#include <Modloader/app/structs/ScrollRect_ScrollRectEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScrollRect_ScrollRectEvent {
        inline app::ScrollRect_ScrollRectEvent__Class** type_info() {
            static app::ScrollRect_ScrollRectEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScrollRect_ScrollRectEvent__Class**)(modloader::win::memory::resolve_rva(0x047087A0));
            }
            return cache;
        }
        inline app::ScrollRect_ScrollRectEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::ScrollRect_ScrollRectEvent__Class>(type_info(), "UnityEngine.UI", "ScrollRect", "ScrollRectEvent");
        }
        inline app::ScrollRect_ScrollRectEvent* create() {
            return il2cpp::create_object<app::ScrollRect_ScrollRectEvent>(get_class());
        }
    } // namespace ScrollRect_ScrollRectEvent
} // namespace app::classes::types
