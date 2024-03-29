#pragma once
#include <Modloader/app/structs/NightCrawlerRetaliationBranches__Enum.h>
#include <Modloader/app/structs/NightCrawlerRetaliationBranches__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerRetaliationBranches__Enum {
        inline app::NightCrawlerRetaliationBranches__Enum__Class** type_info() {
            static app::NightCrawlerRetaliationBranches__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NightCrawlerRetaliationBranches__Enum__Class**)(modloader::win::memory::resolve_rva(0x04789018));
            }
            return cache;
        }
        inline app::NightCrawlerRetaliationBranches__Enum__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerRetaliationBranches__Enum__Class>(type_info(), "", "NightCrawlerRetaliationBranches");
        }
        inline app::NightCrawlerRetaliationBranches__Enum* create() {
            return il2cpp::create_object<app::NightCrawlerRetaliationBranches__Enum>(get_class());
        }
    } // namespace NightCrawlerRetaliationBranches__Enum
} // namespace app::classes::types
