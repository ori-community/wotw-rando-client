#pragma once
#include <Modloader/app/structs/RuntimeQuest.h>
#include <Modloader/app/structs/RuntimeQuest__Array.h>
#include <Modloader/app/structs/RuntimeQuest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeQuest {
        inline app::RuntimeQuest__Class** type_info() {
            static app::RuntimeQuest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeQuest__Class**)(modloader::win::memory::resolve_rva(0x04733CE8));
            }
            return cache;
        }
        inline app::RuntimeQuest__Class* get_class() {
            return il2cpp::get_class<app::RuntimeQuest__Class>(type_info(), "", "RuntimeQuest");
        }
        inline app::RuntimeQuest* create() {
            return il2cpp::create_object<app::RuntimeQuest>(get_class());
        }
        inline app::RuntimeQuest__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeQuest__Array>(get_class(), size);
        }
        inline app::RuntimeQuest__Array* create_array(const std::vector<app::RuntimeQuest*>& items) {
            return il2cpp::array_new<app::RuntimeQuest__Array>(get_class(), items);
        }
    } // namespace RuntimeQuest
} // namespace app::classes::types
