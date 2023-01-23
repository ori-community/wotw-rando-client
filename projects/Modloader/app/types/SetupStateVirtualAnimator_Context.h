#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetupStateVirtualAnimator_Context__Class.h>
#include <Modloader/app/structs/SetupStateVirtualAnimator_Context.h>
#include <Modloader/app/structs/SetupStateVirtualAnimator_Context__Boxed.h>

namespace app::classes::types {
    namespace SetupStateVirtualAnimator_Context {
        inline app::SetupStateVirtualAnimator_Context__Class** type_info = (app::SetupStateVirtualAnimator_Context__Class**)(modloader::win::memory::resolve_rva(0x047102E0));
        inline app::SetupStateVirtualAnimator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::SetupStateVirtualAnimator_Context__Class>(type_info, "", "SetupStateVirtualAnimator", "Context");
        }
        inline app::SetupStateVirtualAnimator_Context* create() {
            return il2cpp::create_object<app::SetupStateVirtualAnimator_Context>(get_class());
        }
        inline app::SetupStateVirtualAnimator_Context__Boxed* box(app::SetupStateVirtualAnimator_Context value) {
            return il2cpp::box_value<app::SetupStateVirtualAnimator_Context__Boxed>(get_class(), value);
        }
    } // namespace SetupStateVirtualAnimator_Context
} // namespace app::classes::types
