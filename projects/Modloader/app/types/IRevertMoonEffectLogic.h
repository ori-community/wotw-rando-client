#pragma once
#include <Modloader/app/structs/IRevertMoonEffectLogic.h>
#include <Modloader/app/structs/IRevertMoonEffectLogic__Array.h>
#include <Modloader/app/structs/IRevertMoonEffectLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRevertMoonEffectLogic {
        inline app::IRevertMoonEffectLogic__Class** type_info() {
            static app::IRevertMoonEffectLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRevertMoonEffectLogic__Class**)(modloader::win::memory::resolve_rva(0x04753390));
            }
            return cache;
        }
        inline app::IRevertMoonEffectLogic__Class* get_class() {
            return il2cpp::get_class<app::IRevertMoonEffectLogic__Class>(type_info(), "Moon.EffectsFramework", "IRevertMoonEffectLogic");
        }
        inline app::IRevertMoonEffectLogic__Array* create_array(int size) {
            return il2cpp::array_new<app::IRevertMoonEffectLogic__Array>(get_class(), size);
        }
        inline app::IRevertMoonEffectLogic__Array* create_array(const std::vector<app::IRevertMoonEffectLogic*>& items) {
            return il2cpp::array_new<app::IRevertMoonEffectLogic__Array>(get_class(), items);
        }
    } // namespace IRevertMoonEffectLogic
} // namespace app::classes::types
