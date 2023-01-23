#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LogStatement_3__Class.h>
#include <Modloader/app/structs/LogStatement_3.h>
#include <Modloader/app/structs/LogStatement_3__Array.h>

namespace app::classes::types {
    namespace LogStatement_3 {
        namespace {
            inline app::LogStatement_3__Class* type_info_ref = nullptr;
        }
        inline app::LogStatement_3__Class** type_info = &type_info_ref;
        inline app::LogStatement_3__Class* get_class() {
            return il2cpp::get_class<app::LogStatement_3__Class>(type_info, "PlayFab.PlayStreamModels", "LogStatement");
        }
        inline app::LogStatement_3* create() {
            return il2cpp::create_object<app::LogStatement_3>(get_class());
        }
        inline app::LogStatement_3__Array* create_array(int size) {
            return il2cpp::array_new<app::LogStatement_3__Array>(get_class(), size);
        }
        inline app::LogStatement_3__Array* create_array(const std::vector<app::LogStatement_3*>& items) {
            return il2cpp::array_new<app::LogStatement_3__Array>(get_class(), items);
        }
    } // namespace LogStatement_3
} // namespace app::classes::types
