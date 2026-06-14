#pragma once
#include <Modloader/app/structs/DisabledSavePedestalSaver.h>
#include <Modloader/app/structs/DisabledSavePedestalSaver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisabledSavePedestalSaver {
        inline app::DisabledSavePedestalSaver__Class** type_info() {
            static app::DisabledSavePedestalSaver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisabledSavePedestalSaver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisabledSavePedestalSaver__Class* get_class() {
            return il2cpp::get_class<app::DisabledSavePedestalSaver__Class>(type_info(), "", "DisabledSavePedestalSaver");
        }
        inline app::DisabledSavePedestalSaver* create() {
            return il2cpp::create_object<app::DisabledSavePedestalSaver>(get_class());
        }
    } // namespace DisabledSavePedestalSaver
} // namespace app::classes::types
