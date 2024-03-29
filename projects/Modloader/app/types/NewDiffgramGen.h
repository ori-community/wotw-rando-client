#pragma once
#include <Modloader/app/structs/NewDiffgramGen.h>
#include <Modloader/app/structs/NewDiffgramGen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewDiffgramGen {
        inline app::NewDiffgramGen__Class** type_info() {
            static app::NewDiffgramGen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewDiffgramGen__Class**)(modloader::win::memory::resolve_rva(0x04767DC8));
            }
            return cache;
        }
        inline app::NewDiffgramGen__Class* get_class() {
            return il2cpp::get_class<app::NewDiffgramGen__Class>(type_info(), "System.Data", "NewDiffgramGen");
        }
        inline app::NewDiffgramGen* create() {
            return il2cpp::create_object<app::NewDiffgramGen>(get_class());
        }
    } // namespace NewDiffgramGen
} // namespace app::classes::types
