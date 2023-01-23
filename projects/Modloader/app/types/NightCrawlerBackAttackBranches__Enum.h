#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NightCrawlerBackAttackBranches__Enum__Class.h>
#include <Modloader/app/structs/NightCrawlerBackAttackBranches__Enum.h>

namespace app::classes::types {
    namespace NightCrawlerBackAttackBranches__Enum {
        inline app::NightCrawlerBackAttackBranches__Enum__Class** type_info = (app::NightCrawlerBackAttackBranches__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470FF50));
        inline app::NightCrawlerBackAttackBranches__Enum__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerBackAttackBranches__Enum__Class>(type_info, "", "NightCrawlerBackAttackBranches");
        }
        inline app::NightCrawlerBackAttackBranches__Enum* create() {
            return il2cpp::create_object<app::NightCrawlerBackAttackBranches__Enum>(get_class());
        }
    } // namespace NightCrawlerBackAttackBranches__Enum
} // namespace app::classes::types
