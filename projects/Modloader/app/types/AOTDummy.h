#pragma once
#include <Modloader/app/structs/AOTDummy.h>
#include <Modloader/app/structs/AOTDummy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AOTDummy {
        inline app::AOTDummy__Class** type_info() {
            static app::AOTDummy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AOTDummy__Class**)(modloader::win::memory::resolve_rva(0x0475BF30));
            }
            return cache;
        }
        inline app::AOTDummy__Class* get_class() {
            return il2cpp::get_class<app::AOTDummy__Class>(type_info(), "ParadoxNotion.Internal", "AOTDummy");
        }
        inline app::AOTDummy* create() {
            return il2cpp::create_object<app::AOTDummy>(get_class());
        }
    } // namespace AOTDummy
} // namespace app::classes::types
