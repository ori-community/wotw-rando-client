#pragma once
#include <Modloader/app/structs/NightCrawlerRevealTorchTrigger.h>
#include <Modloader/app/structs/NightCrawlerRevealTorchTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerRevealTorchTrigger {
        inline app::NightCrawlerRevealTorchTrigger__Class** type_info() {
            static app::NightCrawlerRevealTorchTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightCrawlerRevealTorchTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightCrawlerRevealTorchTrigger__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerRevealTorchTrigger__Class>(type_info(), "", "NightCrawlerRevealTorchTrigger");
        }
        inline app::NightCrawlerRevealTorchTrigger* create() {
            return il2cpp::create_object<app::NightCrawlerRevealTorchTrigger>(get_class());
        }
    } // namespace NightCrawlerRevealTorchTrigger
} // namespace app::classes::types
