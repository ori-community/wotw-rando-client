#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaterialBasedHornBugSlamEffects__Array__Class.h>
#include <Modloader/app/structs/MaterialBasedHornBugSlamEffects__Array.h>

namespace app::classes::types {
    namespace MaterialBasedHornBugSlamEffects__Array {
        inline app::MaterialBasedHornBugSlamEffects__Array__Class** type_info = (app::MaterialBasedHornBugSlamEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x0476FA90));
        inline app::MaterialBasedHornBugSlamEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedHornBugSlamEffects__Array__Class>(type_info, "", "MaterialBasedHornBugSlamEffects[]");
        }
        inline app::MaterialBasedHornBugSlamEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedHornBugSlamEffects__Array>(get_class());
        }
    } // namespace MaterialBasedHornBugSlamEffects__Array
} // namespace app::classes::types
