#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FacebookPlayFabIdPair_1__Class.h>
#include <Modloader/app/structs/FacebookPlayFabIdPair_1.h>
#include <Modloader/app/structs/FacebookPlayFabIdPair_1__Array.h>

namespace app::classes::types {
    namespace FacebookPlayFabIdPair_1 {
        namespace {
            inline app::FacebookPlayFabIdPair_1__Class* type_info_ref = nullptr;
        }
        inline app::FacebookPlayFabIdPair_1__Class** type_info = &type_info_ref;
        inline app::FacebookPlayFabIdPair_1__Class* get_class() {
            return il2cpp::get_class<app::FacebookPlayFabIdPair_1__Class>(type_info, "PlayFab.ServerModels", "FacebookPlayFabIdPair");
        }
        inline app::FacebookPlayFabIdPair_1* create() {
            return il2cpp::create_object<app::FacebookPlayFabIdPair_1>(get_class());
        }
        inline app::FacebookPlayFabIdPair_1__Array* create_array(int size) {
            return il2cpp::array_new<app::FacebookPlayFabIdPair_1__Array>(get_class(), size);
        }
        inline app::FacebookPlayFabIdPair_1__Array* create_array(const std::vector<app::FacebookPlayFabIdPair_1*>& items) {
            return il2cpp::array_new<app::FacebookPlayFabIdPair_1__Array>(get_class(), items);
        }
    } // namespace FacebookPlayFabIdPair_1
} // namespace app::classes::types
