#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerRetaliationBranches__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NightCrawlerRetaliationBranches__Enum__Class** type_info;
        inline app::NightCrawlerRetaliationBranches__Enum__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerRetaliationBranches__Enum__Class>(type_info, "", "NightCrawlerRetaliationBranches");
        }
        inline app::NightCrawlerRetaliationBranches__Enum* create() {
            return il2cpp::create_object<app::NightCrawlerRetaliationBranches__Enum>(get_class());
        }
    } // namespace NightCrawlerRetaliationBranches__Enum
} // namespace app::classes::types
