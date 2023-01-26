#pragma once
#include <Modloader/app/structs/AnalyticsBridge.h>
#include <Modloader/app/structs/AnalyticsBridge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnalyticsBridge {
        inline app::AnalyticsBridge__Class** type_info() {
            static app::AnalyticsBridge__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnalyticsBridge__Class**)(modloader::win::memory::resolve_rva(0x04790678));
            }
            return cache;
        }
        inline app::AnalyticsBridge__Class* get_class() {
            return il2cpp::get_class<app::AnalyticsBridge__Class>(type_info(), "", "AnalyticsBridge");
        }
        inline app::AnalyticsBridge* create() {
            return il2cpp::create_object<app::AnalyticsBridge>(get_class());
        }
    } // namespace AnalyticsBridge
} // namespace app::classes::types
