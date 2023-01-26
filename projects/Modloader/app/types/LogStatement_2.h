#pragma once
#include <Modloader/app/structs/LogStatement_2.h>
#include <Modloader/app/structs/LogStatement_2__Array.h>
#include <Modloader/app/structs/LogStatement_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogStatement_2 {
        inline app::LogStatement_2__Class** type_info() {
            static app::LogStatement_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LogStatement_2__Class**)(modloader::win::memory::resolve_rva(0x047967B0));
            }
            return cache;
        }
        inline app::LogStatement_2__Class* get_class() {
            return il2cpp::get_class<app::LogStatement_2__Class>(type_info(), "PlayFab.ServerModels", "LogStatement");
        }
        inline app::LogStatement_2* create() {
            return il2cpp::create_object<app::LogStatement_2>(get_class());
        }
        inline app::LogStatement_2__Array* create_array(int size) {
            return il2cpp::array_new<app::LogStatement_2__Array>(get_class(), size);
        }
        inline app::LogStatement_2__Array* create_array(const std::vector<app::LogStatement_2*>& items) {
            return il2cpp::array_new<app::LogStatement_2__Array>(get_class(), items);
        }
    } // namespace LogStatement_2
} // namespace app::classes::types
