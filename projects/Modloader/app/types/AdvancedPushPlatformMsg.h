#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AdvancedPushPlatformMsg__Class.h>
#include <Modloader/app/structs/AdvancedPushPlatformMsg.h>
#include <Modloader/app/structs/AdvancedPushPlatformMsg__Array.h>

namespace app::classes::types {
    namespace AdvancedPushPlatformMsg {
        namespace {
            inline app::AdvancedPushPlatformMsg__Class* type_info_ref = nullptr;
        }
        inline app::AdvancedPushPlatformMsg__Class** type_info = &type_info_ref;
        inline app::AdvancedPushPlatformMsg__Class* get_class() {
            return il2cpp::get_class<app::AdvancedPushPlatformMsg__Class>(type_info, "PlayFab.ServerModels", "AdvancedPushPlatformMsg");
        }
        inline app::AdvancedPushPlatformMsg* create() {
            return il2cpp::create_object<app::AdvancedPushPlatformMsg>(get_class());
        }
        inline app::AdvancedPushPlatformMsg__Array* create_array(int size) {
            return il2cpp::array_new<app::AdvancedPushPlatformMsg__Array>(get_class(), size);
        }
        inline app::AdvancedPushPlatformMsg__Array* create_array(const std::vector<app::AdvancedPushPlatformMsg*>& items) {
            return il2cpp::array_new<app::AdvancedPushPlatformMsg__Array>(get_class(), items);
        }
    } // namespace AdvancedPushPlatformMsg
} // namespace app::classes::types
