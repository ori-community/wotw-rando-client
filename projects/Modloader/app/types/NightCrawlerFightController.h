#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NightCrawlerFightController__Class.h>
#include <Modloader/app/structs/NightCrawlerFightController.h>

namespace app::classes::types {
    namespace NightCrawlerFightController {
        namespace {
            inline app::NightCrawlerFightController__Class* type_info_ref = nullptr;
        }
        inline app::NightCrawlerFightController__Class** type_info = &type_info_ref;
        inline app::NightCrawlerFightController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerFightController__Class>(type_info, "", "NightCrawlerFightController");
        }
        inline app::NightCrawlerFightController* create() {
            return il2cpp::create_object<app::NightCrawlerFightController>(get_class());
        }
    } // namespace NightCrawlerFightController
} // namespace app::classes::types
