#pragma once
#include <Modloader/app/structs/UberGCLogic_GCLogicSettings.h>
#include <Modloader/app/structs/UberGCLogic_GCLogicSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberGCLogic_GCLogicSettings {
        inline app::UberGCLogic_GCLogicSettings__Class** type_info() {
            static app::UberGCLogic_GCLogicSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberGCLogic_GCLogicSettings__Class**)(modloader::win::memory::resolve_rva(0x0474B988));
            }
            return cache;
        }
        inline app::UberGCLogic_GCLogicSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCLogic_GCLogicSettings__Class>(type_info(), "UberShader.optimizations.gc", "UberGCLogic", "GCLogicSettings");
        }
        inline app::UberGCLogic_GCLogicSettings* create() {
            return il2cpp::create_object<app::UberGCLogic_GCLogicSettings>(get_class());
        }
    } // namespace UberGCLogic_GCLogicSettings
} // namespace app::classes::types
