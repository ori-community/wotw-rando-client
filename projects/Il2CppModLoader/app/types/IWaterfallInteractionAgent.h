#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IWaterfallInteractionAgent {
        inline app::IWaterfallInteractionAgent__Class** type_info = (app::IWaterfallInteractionAgent__Class**)(modloader::win::memory::resolve_rva(0x047028E0));
        inline app::IWaterfallInteractionAgent__Class* get_class() {
            return il2cpp::get_class<app::IWaterfallInteractionAgent__Class>(type_info, "Moon", "IWaterfallInteractionAgent");
        }
        inline app::IWaterfallInteractionAgent__Array* create_array(int size) {
            return il2cpp::array_new<app::IWaterfallInteractionAgent__Array>(get_class(), size);
        }
        inline app::IWaterfallInteractionAgent__Array* create_array(const std::vector<app::IWaterfallInteractionAgent*>& items) {
            return il2cpp::array_new<app::IWaterfallInteractionAgent__Array>(get_class(), items);
        }
    } // namespace IWaterfallInteractionAgent
} // namespace app::classes::types
