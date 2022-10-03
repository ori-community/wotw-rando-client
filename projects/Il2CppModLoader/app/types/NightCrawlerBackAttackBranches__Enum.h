#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerBackAttackBranches__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NightCrawlerBackAttackBranches__Enum__Class** type_info;
        inline app::NightCrawlerBackAttackBranches__Enum__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerBackAttackBranches__Enum__Class>(type_info, "", "NightCrawlerBackAttackBranches");
        }
        inline app::NightCrawlerBackAttackBranches__Enum* create() {
            return il2cpp::create_object<app::NightCrawlerBackAttackBranches__Enum>(get_class());
        }
    } // namespace NightCrawlerBackAttackBranches__Enum
} // namespace app::classes::types
