#pragma once
#include <Modloader/app/structs/LogStatement.h>
#include <Modloader/app/structs/LogStatement__Array.h>
#include <Modloader/app/structs/LogStatement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogStatement {
        inline app::LogStatement__Class** type_info() {
            static app::LogStatement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LogStatement__Class**)(modloader::win::memory::resolve_rva(0x0473DF10));
            }
            return cache;
        }
        inline app::LogStatement__Class* get_class() {
            return il2cpp::get_class<app::LogStatement__Class>(type_info(), "PlayFab.ClientModels", "LogStatement");
        }
        inline app::LogStatement* create() {
            return il2cpp::create_object<app::LogStatement>(get_class());
        }
        inline app::LogStatement__Array* create_array(int size) {
            return il2cpp::array_new<app::LogStatement__Array>(get_class(), size);
        }
        inline app::LogStatement__Array* create_array(const std::vector<app::LogStatement*>& items) {
            return il2cpp::array_new<app::LogStatement__Array>(get_class(), items);
        }
    } // namespace LogStatement
} // namespace app::classes::types
