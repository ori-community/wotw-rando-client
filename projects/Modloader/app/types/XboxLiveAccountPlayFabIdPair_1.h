#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxLiveAccountPlayFabIdPair_1__Class.h>
#include <Modloader/app/structs/XboxLiveAccountPlayFabIdPair_1.h>
#include <Modloader/app/structs/XboxLiveAccountPlayFabIdPair_1__Array.h>

namespace app::classes::types {
    namespace XboxLiveAccountPlayFabIdPair_1 {
        namespace {
            inline app::XboxLiveAccountPlayFabIdPair_1__Class* type_info_ref = nullptr;
        }
        inline app::XboxLiveAccountPlayFabIdPair_1__Class** type_info = &type_info_ref;
        inline app::XboxLiveAccountPlayFabIdPair_1__Class* get_class() {
            return il2cpp::get_class<app::XboxLiveAccountPlayFabIdPair_1__Class>(type_info, "PlayFab.ServerModels", "XboxLiveAccountPlayFabIdPair");
        }
        inline app::XboxLiveAccountPlayFabIdPair_1* create() {
            return il2cpp::create_object<app::XboxLiveAccountPlayFabIdPair_1>(get_class());
        }
        inline app::XboxLiveAccountPlayFabIdPair_1__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxLiveAccountPlayFabIdPair_1__Array>(get_class(), size);
        }
        inline app::XboxLiveAccountPlayFabIdPair_1__Array* create_array(const std::vector<app::XboxLiveAccountPlayFabIdPair_1*>& items) {
            return il2cpp::array_new<app::XboxLiveAccountPlayFabIdPair_1__Array>(get_class(), items);
        }
    } // namespace XboxLiveAccountPlayFabIdPair_1
} // namespace app::classes::types
