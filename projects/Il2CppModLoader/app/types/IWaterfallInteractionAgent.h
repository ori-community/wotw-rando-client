#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IWaterfallInteractionAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IWaterfallInteractionAgent__Class** type_info;
        inline app::IWaterfallInteractionAgent__Class* get_class() {
            return il2cpp::get_class<app::IWaterfallInteractionAgent__Class>(type_info, "Moon", "IWaterfallInteractionAgent");
        }
        inline app::IWaterfallInteractionAgent__Array* create_array(int size) {
            return il2cpp::array_new<app::IWaterfallInteractionAgent__Array>(get_class(), size);
        }
    } // namespace IWaterfallInteractionAgent
} // namespace app::classes::types
