#pragma once
#include <Modloader/app/structs/WebClient_ProgressData.h>
#include <Modloader/app/structs/WebClient_ProgressData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebClient_ProgressData {
        inline app::WebClient_ProgressData__Class** type_info() {
            static app::WebClient_ProgressData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebClient_ProgressData__Class**)(modloader::win::memory::resolve_rva(0x0477AAB8));
            }
            return cache;
        }
        inline app::WebClient_ProgressData__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_ProgressData__Class>(type_info(), "System.Net", "WebClient", "ProgressData");
        }
        inline app::WebClient_ProgressData* create() {
            return il2cpp::create_object<app::WebClient_ProgressData>(get_class());
        }
    } // namespace WebClient_ProgressData
} // namespace app::classes::types
