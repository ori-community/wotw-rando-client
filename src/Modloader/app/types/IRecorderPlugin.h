#pragma once
#include <Modloader/app/structs/IRecorderPlugin.h>
#include <Modloader/app/structs/IRecorderPlugin__Array.h>
#include <Modloader/app/structs/IRecorderPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRecorderPlugin {
        inline app::IRecorderPlugin__Class** type_info() {
            static app::IRecorderPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRecorderPlugin__Class**)(modloader::win::memory::resolve_rva(0x04740C58));
            }
            return cache;
        }
        inline app::IRecorderPlugin__Class* get_class() {
            return il2cpp::get_class<app::IRecorderPlugin__Class>(type_info(), "", "IRecorderPlugin");
        }
        inline app::IRecorderPlugin__Array* create_array(int size) {
            return il2cpp::array_new<app::IRecorderPlugin__Array>(get_class(), size);
        }
        inline app::IRecorderPlugin__Array* create_array(const std::vector<app::IRecorderPlugin*>& items) {
            return il2cpp::array_new<app::IRecorderPlugin__Array>(get_class(), items);
        }
    } // namespace IRecorderPlugin
} // namespace app::classes::types
