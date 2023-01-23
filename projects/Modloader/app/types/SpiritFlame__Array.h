#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritFlame__Array__Class.h>
#include <Modloader/app/structs/SpiritFlame__Array.h>

namespace app::classes::types {
    namespace SpiritFlame__Array {
        namespace {
            inline app::SpiritFlame__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpiritFlame__Array__Class** type_info = &type_info_ref;
        inline app::SpiritFlame__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritFlame__Array__Class>(type_info, "", "SpiritFlame[]");
        }
        inline app::SpiritFlame__Array* create() {
            return il2cpp::create_object<app::SpiritFlame__Array>(get_class());
        }
    } // namespace SpiritFlame__Array
} // namespace app::classes::types
