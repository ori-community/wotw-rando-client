#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UICharInfo__Class.h>
#include <Modloader/app/structs/UICharInfo.h>
#include <Modloader/app/structs/UICharInfo__Boxed.h>
#include <Modloader/app/structs/UICharInfo__Array.h>

namespace app::classes::types {
    namespace UICharInfo {
        inline app::UICharInfo__Class** type_info = (app::UICharInfo__Class**)(modloader::win::memory::resolve_rva(0x0473FA50));
        inline app::UICharInfo__Class* get_class() {
            return il2cpp::get_class<app::UICharInfo__Class>(type_info, "UnityEngine", "UICharInfo");
        }
        inline app::UICharInfo* create() {
            return il2cpp::create_object<app::UICharInfo>(get_class());
        }
        inline app::UICharInfo__Boxed* box(app::UICharInfo value) {
            return il2cpp::box_value<app::UICharInfo__Boxed>(get_class(), value);
        }
        inline app::UICharInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::UICharInfo__Array>(get_class(), size);
        }
        inline app::UICharInfo__Array* create_array(const std::vector<app::UICharInfo>& items) {
            return il2cpp::array_new<app::UICharInfo__Array>(get_class(), items);
        }
    } // namespace UICharInfo
} // namespace app::classes::types
