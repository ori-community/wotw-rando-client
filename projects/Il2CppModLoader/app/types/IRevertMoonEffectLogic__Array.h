#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRevertMoonEffectLogic__Array {
        namespace {
            app::IRevertMoonEffectLogic__Array__Class* type_info_ref = nullptr;
        }
        app::IRevertMoonEffectLogic__Array__Class** type_info = &type_info_ref;
        inline app::IRevertMoonEffectLogic__Array__Class* get_class() {
            return il2cpp::get_class<app::IRevertMoonEffectLogic__Array__Class>(type_info, "Moon.EffectsFramework", "IRevertMoonEffectLogic[]");
        }
        inline app::IRevertMoonEffectLogic__Array* create() {
            return il2cpp::create_object<app::IRevertMoonEffectLogic__Array>(get_class());
        }
    } // namespace IRevertMoonEffectLogic__Array
} // namespace app::classes::types
