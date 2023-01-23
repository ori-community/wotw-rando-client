#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_c__Class.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_c.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer_c {
        inline app::ScalableAnimationPlayer_c__Class** type_info = (app::ScalableAnimationPlayer_c__Class**)(modloader::win::memory::resolve_rva(0x04780758));
        inline app::ScalableAnimationPlayer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ScalableAnimationPlayer_c__Class>(type_info, "Moon", "ScalableAnimationPlayer", "<>c");
        }
        inline app::ScalableAnimationPlayer_c* create() {
            return il2cpp::create_object<app::ScalableAnimationPlayer_c>(get_class());
        }
    } // namespace ScalableAnimationPlayer_c
} // namespace app::classes::types
