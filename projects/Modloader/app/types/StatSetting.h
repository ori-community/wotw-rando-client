#pragma once
#include <Modloader/app/structs/StatSetting.h>
#include <Modloader/app/structs/StatSetting__Array.h>
#include <Modloader/app/structs/StatSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatSetting {
        inline app::StatSetting__Class** type_info() {
            static app::StatSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StatSetting__Class**)(modloader::win::memory::resolve_rva(0x047186D8));
            }
            return cache;
        }
        inline app::StatSetting__Class* get_class() {
            return il2cpp::get_class<app::StatSetting__Class>(type_info(), "", "StatSetting");
        }
        inline app::StatSetting* create() {
            return il2cpp::create_object<app::StatSetting>(get_class());
        }
        inline app::StatSetting__Array* create_array(int size) {
            return il2cpp::array_new<app::StatSetting__Array>(get_class(), size);
        }
        inline app::StatSetting__Array* create_array(const std::vector<app::StatSetting*>& items) {
            return il2cpp::array_new<app::StatSetting__Array>(get_class(), items);
        }
    } // namespace StatSetting
} // namespace app::classes::types
