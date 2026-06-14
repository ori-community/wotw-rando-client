#pragma once
#include <Modloader/app/structs/NightCrawlerReveal.h>
#include <Modloader/app/structs/NightCrawlerReveal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerReveal {
        inline app::NightCrawlerReveal__Class** type_info() {
            static app::NightCrawlerReveal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightCrawlerReveal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightCrawlerReveal__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerReveal__Class>(type_info(), "", "NightCrawlerReveal");
        }
        inline app::NightCrawlerReveal* create() {
            return il2cpp::create_object<app::NightCrawlerReveal>(get_class());
        }
    } // namespace NightCrawlerReveal
} // namespace app::classes::types
