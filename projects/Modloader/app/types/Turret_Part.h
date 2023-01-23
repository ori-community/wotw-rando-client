#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Turret_Part__Class.h>
#include <Modloader/app/structs/Turret_Part.h>
#include <Modloader/app/structs/Turret_Part__Array.h>

namespace app::classes::types {
    namespace Turret_Part {
        namespace {
            inline app::Turret_Part__Class* type_info_ref = nullptr;
        }
        inline app::Turret_Part__Class** type_info = &type_info_ref;
        inline app::Turret_Part__Class* get_class() {
            return il2cpp::get_nested_class<app::Turret_Part__Class>(type_info, "RootMotion.Demos", "Turret", "Part");
        }
        inline app::Turret_Part* create() {
            return il2cpp::create_object<app::Turret_Part>(get_class());
        }
        inline app::Turret_Part__Array* create_array(int size) {
            return il2cpp::array_new<app::Turret_Part__Array>(get_class(), size);
        }
        inline app::Turret_Part__Array* create_array(const std::vector<app::Turret_Part*>& items) {
            return il2cpp::array_new<app::Turret_Part__Array>(get_class(), items);
        }
    } // namespace Turret_Part
} // namespace app::classes::types
