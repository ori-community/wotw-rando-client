#pragma once
#include <Modloader/app/structs/IWaterfallInteractionAgent__Array.h>
#include <Modloader/app/structs/IWaterfallInteractionAgent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IWaterfallInteractionAgent__Array {
        inline app::IWaterfallInteractionAgent__Array__Class** type_info() {
            static app::IWaterfallInteractionAgent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IWaterfallInteractionAgent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IWaterfallInteractionAgent__Array__Class* get_class() {
            return il2cpp::get_class<app::IWaterfallInteractionAgent__Array__Class>(type_info(), "Moon", "IWaterfallInteractionAgent[]");
        }
        inline app::IWaterfallInteractionAgent__Array* create() {
            return il2cpp::create_object<app::IWaterfallInteractionAgent__Array>(get_class());
        }
    } // namespace IWaterfallInteractionAgent__Array
} // namespace app::classes::types
