#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NightCrawlerReveal__Class.h>
#include <Modloader/app/structs/NightCrawlerReveal.h>

namespace app::classes::types {
    namespace NightCrawlerReveal {
        namespace {
            inline app::NightCrawlerReveal__Class* type_info_ref = nullptr;
        }
        inline app::NightCrawlerReveal__Class** type_info = &type_info_ref;
        inline app::NightCrawlerReveal__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerReveal__Class>(type_info, "", "NightCrawlerReveal");
        }
        inline app::NightCrawlerReveal* create() {
            return il2cpp::create_object<app::NightCrawlerReveal>(get_class());
        }
    } // namespace NightCrawlerReveal
} // namespace app::classes::types
