#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GardenerItem__Array__Class.h>
#include <Modloader/app/structs/GardenerItem__Array.h>

namespace app::classes::types {
    namespace GardenerItem__Array {
        namespace {
            inline app::GardenerItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::GardenerItem__Array__Class** type_info = &type_info_ref;
        inline app::GardenerItem__Array__Class* get_class() {
            return il2cpp::get_class<app::GardenerItem__Array__Class>(type_info, "", "GardenerItem[]");
        }
        inline app::GardenerItem__Array* create() {
            return il2cpp::create_object<app::GardenerItem__Array>(get_class());
        }
    } // namespace GardenerItem__Array
} // namespace app::classes::types
