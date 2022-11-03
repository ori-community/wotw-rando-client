#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Flammable__Array {
        namespace {
            inline app::Flammable__Array__Class* type_info_ref = nullptr;
        }
        inline app::Flammable__Array__Class** type_info = &type_info_ref;
        inline app::Flammable__Array__Class* get_class() {
            return il2cpp::get_class<app::Flammable__Array__Class>(type_info, "Moon", "Flammable[]");
        }
        inline app::Flammable__Array* create() {
            return il2cpp::create_object<app::Flammable__Array>(get_class());
        }
    } // namespace Flammable__Array
} // namespace app::classes::types
