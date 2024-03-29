#pragma once
#include <Modloader/app/structs/WorldMapAreaState__Enum.h>
#include <Modloader/app/structs/WorldMapAreaState__Enum__Array.h>
#include <Modloader/app/structs/WorldMapAreaState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldMapAreaState__Enum {
        inline app::WorldMapAreaState__Enum__Class** type_info() {
            static app::WorldMapAreaState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WorldMapAreaState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04707E70));
            }
            return cache;
        }
        inline app::WorldMapAreaState__Enum__Class* get_class() {
            return il2cpp::get_class<app::WorldMapAreaState__Enum__Class>(type_info(), "", "WorldMapAreaState");
        }
        inline app::WorldMapAreaState__Enum* create() {
            return il2cpp::create_object<app::WorldMapAreaState__Enum>(get_class());
        }
        inline app::WorldMapAreaState__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldMapAreaState__Enum__Array>(get_class(), size);
        }
        inline app::WorldMapAreaState__Enum__Array* create_array(const std::vector<app::WorldMapAreaState__Enum*>& items) {
            return il2cpp::array_new<app::WorldMapAreaState__Enum__Array>(get_class(), items);
        }
    } // namespace WorldMapAreaState__Enum
} // namespace app::classes::types
