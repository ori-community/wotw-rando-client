#pragma once
#include <Modloader/app/structs/Group.h>
#include <Modloader/app/structs/Group__Array.h>
#include <Modloader/app/structs/Group__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Group {
        inline app::Group__Class** type_info() {
            static app::Group__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Group__Class**)(modloader::win::memory::resolve_rva(0x0477AAC0));
            }
            return cache;
        }
        inline app::Group__Class* get_class() {
            return il2cpp::get_class<app::Group__Class>(type_info(), "System.Text.RegularExpressions", "Group");
        }
        inline app::Group* create() {
            return il2cpp::create_object<app::Group>(get_class());
        }
        inline app::Group__Array* create_array(int size) {
            return il2cpp::array_new<app::Group__Array>(get_class(), size);
        }
        inline app::Group__Array* create_array(const std::vector<app::Group*>& items) {
            return il2cpp::array_new<app::Group__Array>(get_class(), items);
        }
    } // namespace Group
} // namespace app::classes::types
