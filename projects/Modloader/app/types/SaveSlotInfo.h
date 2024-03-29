#pragma once
#include <Modloader/app/structs/SaveSlotInfo.h>
#include <Modloader/app/structs/SaveSlotInfo__Array.h>
#include <Modloader/app/structs/SaveSlotInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotInfo {
        inline app::SaveSlotInfo__Class** type_info() {
            static app::SaveSlotInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SaveSlotInfo__Class**)(modloader::win::memory::resolve_rva(0x04740510));
            }
            return cache;
        }
        inline app::SaveSlotInfo__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotInfo__Class>(type_info(), "", "SaveSlotInfo");
        }
        inline app::SaveSlotInfo* create() {
            return il2cpp::create_object<app::SaveSlotInfo>(get_class());
        }
        inline app::SaveSlotInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSlotInfo__Array>(get_class(), size);
        }
        inline app::SaveSlotInfo__Array* create_array(const std::vector<app::SaveSlotInfo*>& items) {
            return il2cpp::array_new<app::SaveSlotInfo__Array>(get_class(), items);
        }
    } // namespace SaveSlotInfo
} // namespace app::classes::types
