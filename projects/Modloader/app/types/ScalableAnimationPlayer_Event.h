#pragma once
#include <Modloader/app/structs/ScalableAnimationPlayer_Event.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_Event__Array.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_Event__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer_Event {
        inline app::ScalableAnimationPlayer_Event__Class** type_info() {
            static app::ScalableAnimationPlayer_Event__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScalableAnimationPlayer_Event__Class**)(modloader::win::memory::resolve_rva(0x04728100));
            }
            return cache;
        }
        inline app::ScalableAnimationPlayer_Event__Class* get_class() {
            return il2cpp::get_nested_class<app::ScalableAnimationPlayer_Event__Class>(type_info(), "Moon", "ScalableAnimationPlayer", "Event");
        }
        inline app::ScalableAnimationPlayer_Event* create() {
            return il2cpp::create_object<app::ScalableAnimationPlayer_Event>(get_class());
        }
        inline app::ScalableAnimationPlayer_Event__Array* create_array(int size) {
            return il2cpp::array_new<app::ScalableAnimationPlayer_Event__Array>(get_class(), size);
        }
        inline app::ScalableAnimationPlayer_Event__Array* create_array(const std::vector<app::ScalableAnimationPlayer_Event*>& items) {
            return il2cpp::array_new<app::ScalableAnimationPlayer_Event__Array>(get_class(), items);
        }
    } // namespace ScalableAnimationPlayer_Event
} // namespace app::classes::types
