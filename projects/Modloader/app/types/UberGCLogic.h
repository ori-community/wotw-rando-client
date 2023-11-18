#pragma once
#include <Modloader/app/structs/UberGCLogic.h>
#include <Modloader/app/structs/UberGCLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberGCLogic {
        inline app::UberGCLogic__Class** type_info() {
            static app::UberGCLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberGCLogic__Class**)(modloader::win::memory::resolve_rva(0x0470B908));
            }
            return cache;
        }
        inline app::UberGCLogic__Class* get_class() {
            return il2cpp::get_class<app::UberGCLogic__Class>(type_info(), "UberShader.optimizations.gc", "UberGCLogic");
        }
        inline app::UberGCLogic* create() {
            return il2cpp::create_object<app::UberGCLogic>(get_class());
        }
    } // namespace UberGCLogic
} // namespace app::classes::types
