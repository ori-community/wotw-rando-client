#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController__Class.h>
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController.h>

namespace app::classes::types {
    namespace FeedingGroundsPetrifiedOwlController {
        inline app::FeedingGroundsPetrifiedOwlController__Class** type_info = (app::FeedingGroundsPetrifiedOwlController__Class**)(modloader::win::memory::resolve_rva(0x0477FDC8));
        inline app::FeedingGroundsPetrifiedOwlController__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsPetrifiedOwlController__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsPetrifiedOwlController");
        }
        inline app::FeedingGroundsPetrifiedOwlController* create() {
            return il2cpp::create_object<app::FeedingGroundsPetrifiedOwlController>(get_class());
        }
    } // namespace FeedingGroundsPetrifiedOwlController
} // namespace app::classes::types
