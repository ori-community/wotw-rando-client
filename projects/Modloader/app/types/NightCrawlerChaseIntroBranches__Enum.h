#pragma once
#include <Modloader/app/structs/NightCrawlerChaseIntroBranches__Enum.h>
#include <Modloader/app/structs/NightCrawlerChaseIntroBranches__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerChaseIntroBranches__Enum {
        inline app::NightCrawlerChaseIntroBranches__Enum__Class** type_info() {
            static app::NightCrawlerChaseIntroBranches__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NightCrawlerChaseIntroBranches__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472C638));
            }
            return cache;
        }
        inline app::NightCrawlerChaseIntroBranches__Enum__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerChaseIntroBranches__Enum__Class>(type_info(), "", "NightCrawlerChaseIntroBranches");
        }
        inline app::NightCrawlerChaseIntroBranches__Enum* create() {
            return il2cpp::create_object<app::NightCrawlerChaseIntroBranches__Enum>(get_class());
        }
    } // namespace NightCrawlerChaseIntroBranches__Enum
} // namespace app::classes::types
