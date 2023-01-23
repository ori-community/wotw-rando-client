#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NightCrawlerChaseController__Class.h>
#include <Modloader/app/structs/NightCrawlerChaseController.h>

namespace app::classes::types {
    namespace NightCrawlerChaseController {
        namespace {
            inline app::NightCrawlerChaseController__Class* type_info_ref = nullptr;
        }
        inline app::NightCrawlerChaseController__Class** type_info = &type_info_ref;
        inline app::NightCrawlerChaseController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerChaseController__Class>(type_info, "", "NightCrawlerChaseController");
        }
        inline app::NightCrawlerChaseController* create() {
            return il2cpp::create_object<app::NightCrawlerChaseController>(get_class());
        }
    } // namespace NightCrawlerChaseController
} // namespace app::classes::types
