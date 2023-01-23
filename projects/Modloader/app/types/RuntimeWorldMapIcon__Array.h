#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeWorldMapIcon__Array__Class.h>
#include <Modloader/app/structs/RuntimeWorldMapIcon__Array.h>

namespace app::classes::types {
    namespace RuntimeWorldMapIcon__Array {
        namespace {
            inline app::RuntimeWorldMapIcon__Array__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeWorldMapIcon__Array__Class** type_info = &type_info_ref;
        inline app::RuntimeWorldMapIcon__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeWorldMapIcon__Array__Class>(type_info, "", "RuntimeWorldMapIcon[]");
        }
        inline app::RuntimeWorldMapIcon__Array* create() {
            return il2cpp::create_object<app::RuntimeWorldMapIcon__Array>(get_class());
        }
    } // namespace RuntimeWorldMapIcon__Array
} // namespace app::classes::types
