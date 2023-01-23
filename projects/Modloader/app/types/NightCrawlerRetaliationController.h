#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NightCrawlerRetaliationController__Class.h>
#include <Modloader/app/structs/NightCrawlerRetaliationController.h>

namespace app::classes::types {
    namespace NightCrawlerRetaliationController {
        namespace {
            inline app::NightCrawlerRetaliationController__Class* type_info_ref = nullptr;
        }
        inline app::NightCrawlerRetaliationController__Class** type_info = &type_info_ref;
        inline app::NightCrawlerRetaliationController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerRetaliationController__Class>(type_info, "", "NightCrawlerRetaliationController");
        }
        inline app::NightCrawlerRetaliationController* create() {
            return il2cpp::create_object<app::NightCrawlerRetaliationController>(get_class());
        }
    } // namespace NightCrawlerRetaliationController
} // namespace app::classes::types
