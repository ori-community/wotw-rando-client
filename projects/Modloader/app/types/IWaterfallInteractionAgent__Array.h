#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IWaterfallInteractionAgent__Array {
        namespace {
            inline app::IWaterfallInteractionAgent__Array__Class* type_info_ref = nullptr;
        }
        inline app::IWaterfallInteractionAgent__Array__Class** type_info = &type_info_ref;
        inline app::IWaterfallInteractionAgent__Array__Class* get_class() {
            return il2cpp::get_class<app::IWaterfallInteractionAgent__Array__Class>(type_info, "Moon", "IWaterfallInteractionAgent[]");
        }
        inline app::IWaterfallInteractionAgent__Array* create() {
            return il2cpp::create_object<app::IWaterfallInteractionAgent__Array>(get_class());
        }
    } // namespace IWaterfallInteractionAgent__Array
} // namespace app::classes::types
