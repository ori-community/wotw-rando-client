#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerChaseIntroBranches__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NightCrawlerChaseIntroBranches__Enum__Class** type_info;
        inline app::NightCrawlerChaseIntroBranches__Enum__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerChaseIntroBranches__Enum__Class>(type_info, "", "NightCrawlerChaseIntroBranches");
        }
        inline app::NightCrawlerChaseIntroBranches__Enum* create() {
            return il2cpp::create_object<app::NightCrawlerChaseIntroBranches__Enum>(get_class());
        }
    } // namespace NightCrawlerChaseIntroBranches__Enum
} // namespace app::classes::types
