#pragma once
#include <Modloader/app/structs/MaterialBasedHornBugSlamEffects__Array.h>
#include <Modloader/app/structs/MaterialBasedHornBugSlamEffects__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedHornBugSlamEffects__Array {
        inline app::MaterialBasedHornBugSlamEffects__Array__Class** type_info() {
            static app::MaterialBasedHornBugSlamEffects__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaterialBasedHornBugSlamEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x0476FA90));
            }
            return cache;
        }
        inline app::MaterialBasedHornBugSlamEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedHornBugSlamEffects__Array__Class>(type_info(), "", "MaterialBasedHornBugSlamEffects[]");
        }
        inline app::MaterialBasedHornBugSlamEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedHornBugSlamEffects__Array>(get_class());
        }
    } // namespace MaterialBasedHornBugSlamEffects__Array
} // namespace app::classes::types
