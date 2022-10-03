#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerRevealTorchTrigger {
        namespace {
            app::NightCrawlerRevealTorchTrigger__Class* type_info_ref = nullptr;
        }
        app::NightCrawlerRevealTorchTrigger__Class** type_info = &type_info_ref;
        inline app::NightCrawlerRevealTorchTrigger__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerRevealTorchTrigger__Class>(type_info, "", "NightCrawlerRevealTorchTrigger");
        }
        inline app::NightCrawlerRevealTorchTrigger* create() {
            return il2cpp::create_object<app::NightCrawlerRevealTorchTrigger>(get_class());
        }
    } // namespace NightCrawlerRevealTorchTrigger
} // namespace app::classes::types
