#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Grounding_Leg {
        inline app::Grounding_Leg__Class** type_info = (app::Grounding_Leg__Class**)(modloader::win::memory::resolve_rva(0x04726058));
        inline app::Grounding_Leg__Class* get_class() {
            return il2cpp::get_nested_class<app::Grounding_Leg__Class>(type_info, "RootMotion.FinalIK", "Grounding", "Leg");
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
