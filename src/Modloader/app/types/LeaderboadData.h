#pragma once
#include <Modloader/app/structs/LeaderboadData.h>
#include <Modloader/app/structs/LeaderboadData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboadData {
        inline app::LeaderboadData__Class** type_info() {
            static app::LeaderboadData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderboadData__Class**)(modloader::win::memory::resolve_rva(0x0478BA48));
            }
            return cache;
        }
        inline app::LeaderboadData__Class* get_class() {
            return il2cpp::get_class<app::LeaderboadData__Class>(type_info(), "Moon.Race.Networking", "LeaderboadData");
        }
        inline app::LeaderboadData* create() {
            return il2cpp::create_object<app::LeaderboadData>(get_class());
        }
    } // namespace LeaderboadData
} // namespace app::classes::types
