#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightCrawlerChaseIntroBranches__Enum {
        inline app::NightCrawlerChaseIntroBranches__Enum__Class** type_info = (app::NightCrawlerChaseIntroBranches__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472C638));
        inline app::NightCrawlerChaseIntroBranches__Enum__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerChaseIntroBranches__Enum__Class>(type_info, "", "NightCrawlerChaseIntroBranches");
        }
        inline app::NightCrawlerChaseIntroBranches__Enum* create() {
            return il2cpp::create_object<app::NightCrawlerChaseIntroBranches__Enum>(get_class());
        }
    } // namespace NightCrawlerChaseIntroBranches__Enum
} // namespace app::classes::types
