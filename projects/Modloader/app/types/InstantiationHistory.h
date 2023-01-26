#pragma once
#include <Modloader/app/structs/InstantiationHistory.h>
#include <Modloader/app/structs/InstantiationHistory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiationHistory {
        inline app::InstantiationHistory__Class** type_info() {
            static app::InstantiationHistory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstantiationHistory__Class**)(modloader::win::memory::resolve_rva(0x04796918));
            }
            return cache;
        }
        inline app::InstantiationHistory__Class* get_class() {
            return il2cpp::get_class<app::InstantiationHistory__Class>(type_info(), "", "InstantiationHistory");
        }
        inline app::InstantiationHistory* create() {
            return il2cpp::create_object<app::InstantiationHistory>(get_class());
        }
    } // namespace InstantiationHistory
} // namespace app::classes::types
