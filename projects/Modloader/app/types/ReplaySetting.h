#pragma once
#include <Modloader/app/structs/ReplaySetting.h>
#include <Modloader/app/structs/ReplaySetting__Array.h>
#include <Modloader/app/structs/ReplaySetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplaySetting {
        inline app::ReplaySetting__Class** type_info() {
            static app::ReplaySetting__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReplaySetting__Class**)(modloader::win::memory::resolve_rva(0x047263A0));
            }
            return cache;
        }
        inline app::ReplaySetting__Class* get_class() {
            return il2cpp::get_class<app::ReplaySetting__Class>(type_info(), "", "ReplaySetting");
        }
        inline app::ReplaySetting* create() {
            return il2cpp::create_object<app::ReplaySetting>(get_class());
        }
        inline app::ReplaySetting__Array* create_array(int size) {
            return il2cpp::array_new<app::ReplaySetting__Array>(get_class(), size);
        }
        inline app::ReplaySetting__Array* create_array(const std::vector<app::ReplaySetting*>& items) {
            return il2cpp::array_new<app::ReplaySetting__Array>(get_class(), items);
        }
    } // namespace ReplaySetting
} // namespace app::classes::types
