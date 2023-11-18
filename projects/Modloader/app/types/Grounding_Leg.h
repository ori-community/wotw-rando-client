#pragma once
#include <Modloader/app/structs/Grounding_Leg.h>
#include <Modloader/app/structs/Grounding_Leg__Array.h>
#include <Modloader/app/structs/Grounding_Leg__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Grounding_Leg {
        inline app::Grounding_Leg__Class** type_info() {
            static app::Grounding_Leg__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Grounding_Leg__Class**)(modloader::win::memory::resolve_rva(0x04726058));
            }
            return cache;
        }
        inline app::Grounding_Leg__Class* get_class() {
            return il2cpp::get_nested_class<app::Grounding_Leg__Class>(type_info(), "RootMotion.FinalIK", "Grounding", "Leg");
        }
        inline app::Grounding_Leg* create() {
            return il2cpp::create_object<app::Grounding_Leg>(get_class());
        }
        inline app::Grounding_Leg__Array* create_array(int size) {
            return il2cpp::array_new<app::Grounding_Leg__Array>(get_class(), size);
        }
        inline app::Grounding_Leg__Array* create_array(const std::vector<app::Grounding_Leg*>& items) {
            return il2cpp::array_new<app::Grounding_Leg__Array>(get_class(), items);
        }
    } // namespace Grounding_Leg
} // namespace app::classes::types
