#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberGCLogic__Class.h>
#include <Modloader/app/structs/UberGCLogic.h>

namespace app::classes::types {
    namespace UberGCLogic {
        inline app::UberGCLogic__Class** type_info = (app::UberGCLogic__Class**)(modloader::win::memory::resolve_rva(0x0470B908));
        inline app::UberGCLogic__Class* get_class() {
            return il2cpp::get_class<app::UberGCLogic__Class>(type_info, "UberShader.optimizations.gc", "UberGCLogic");
        }
        inline app::UberGCLogic* create() {
            return il2cpp::create_object<app::UberGCLogic>(get_class());
        }
    } // namespace UberGCLogic
} // namespace app::classes::types
