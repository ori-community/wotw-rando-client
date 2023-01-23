#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationContext__Class.h>
#include <Modloader/app/structs/AnimationContext.h>
#include <Modloader/app/structs/AnimationContext__Boxed.h>

namespace app::classes::types {
    namespace AnimationContext {
        inline app::AnimationContext__Class** type_info = (app::AnimationContext__Class**)(modloader::win::memory::resolve_rva(0x04790FD0));
        inline app::AnimationContext__Class* get_class() {
            return il2cpp::get_class<app::AnimationContext__Class>(type_info, "Moon.Timeline", "AnimationContext");
        }
        inline app::AnimationContext* create() {
            return il2cpp::create_object<app::AnimationContext>(get_class());
        }
        inline app::AnimationContext__Boxed* box(app::AnimationContext value) {
            return il2cpp::box_value<app::AnimationContext__Boxed>(get_class(), value);
        }
    } // namespace AnimationContext
} // namespace app::classes::types
