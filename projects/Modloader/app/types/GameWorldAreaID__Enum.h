#pragma once
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum__Array.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameWorldAreaID__Enum {
        inline app::GameWorldAreaID__Enum__Class** type_info() {
            static app::GameWorldAreaID__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameWorldAreaID__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470E498));
            }
            return cache;
        }
        inline app::GameWorldAreaID__Enum__Class* get_class() {
            return il2cpp::get_class<app::GameWorldAreaID__Enum__Class>(type_info(), "", "GameWorldAreaID");
        }
        inline app::GameWorldAreaID__Enum* create() {
            return il2cpp::create_object<app::GameWorldAreaID__Enum>(get_class());
        }
        inline app::GameWorldAreaID__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::GameWorldAreaID__Enum__Array>(get_class(), size);
        }
        inline app::GameWorldAreaID__Enum__Array* create_array(const std::vector<app::GameWorldAreaID__Enum*>& items) {
            return il2cpp::array_new<app::GameWorldAreaID__Enum__Array>(get_class(), items);
        }
    } // namespace GameWorldAreaID__Enum
} // namespace app::classes::types
