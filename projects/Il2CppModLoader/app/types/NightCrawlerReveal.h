#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerReveal {
        namespace {
            app::NightCrawlerReveal__Class* type_info_ref = nullptr;
        }
        app::NightCrawlerReveal__Class** type_info = &type_info_ref;
        inline app::NightCrawlerReveal__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerReveal__Class>(type_info, "", "NightCrawlerReveal");
        }
        inline app::NightCrawlerReveal* create() {
            return il2cpp::create_object<app::NightCrawlerReveal>(get_class());
        }
    } // namespace NightCrawlerReveal
} // namespace app::classes::types
