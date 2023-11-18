#pragma once
#include <Modloader/app/structs/IRevertMoonEffectLogic__Array.h>
#include <Modloader/app/structs/IRevertMoonEffectLogic__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRevertMoonEffectLogic__Array {
        inline app::IRevertMoonEffectLogic__Array__Class** type_info() {
            static app::IRevertMoonEffectLogic__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IRevertMoonEffectLogic__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IRevertMoonEffectLogic__Array__Class* get_class() {
            return il2cpp::get_class<app::IRevertMoonEffectLogic__Array__Class>(type_info(), "Moon.EffectsFramework", "IRevertMoonEffectLogic[]");
        }
        inline app::IRevertMoonEffectLogic__Array* create() {
            return il2cpp::create_object<app::IRevertMoonEffectLogic__Array>(get_class());
        }
    } // namespace IRevertMoonEffectLogic__Array
} // namespace app::classes::types
