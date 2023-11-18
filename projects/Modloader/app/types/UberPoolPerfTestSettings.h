#pragma once
#include <Modloader/app/structs/UberPoolPerfTestSettings.h>
#include <Modloader/app/structs/UberPoolPerfTestSettings__Array.h>
#include <Modloader/app/structs/UberPoolPerfTestSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTestSettings {
        inline app::UberPoolPerfTestSettings__Class** type_info() {
            static app::UberPoolPerfTestSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPerfTestSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPerfTestSettings__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPerfTestSettings__Class>(type_info(), "", "UberPoolPerfTestSettings");
        }
        inline app::UberPoolPerfTestSettings* create() {
            return il2cpp::create_object<app::UberPoolPerfTestSettings>(get_class());
        }
        inline app::UberPoolPerfTestSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolPerfTestSettings__Array>(get_class(), size);
        }
        inline app::UberPoolPerfTestSettings__Array* create_array(const std::vector<app::UberPoolPerfTestSettings*>& items) {
            return il2cpp::array_new<app::UberPoolPerfTestSettings__Array>(get_class(), items);
        }
    } // namespace UberPoolPerfTestSettings
} // namespace app::classes::types
