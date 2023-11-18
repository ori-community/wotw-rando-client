#pragma once
#include <Modloader/app/structs/TextInfoToLowerData.h>
#include <Modloader/app/structs/TextInfoToLowerData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextInfoToLowerData {
        inline app::TextInfoToLowerData__Class** type_info() {
            static app::TextInfoToLowerData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextInfoToLowerData__Class**)(modloader::win::memory::resolve_rva(0x04788168));
            }
            return cache;
        }
        inline app::TextInfoToLowerData__Class* get_class() {
            return il2cpp::get_class<app::TextInfoToLowerData__Class>(type_info(), "System.Globalization", "TextInfoToLowerData");
        }
        inline app::TextInfoToLowerData* create() {
            return il2cpp::create_object<app::TextInfoToLowerData>(get_class());
        }
    } // namespace TextInfoToLowerData
} // namespace app::classes::types
