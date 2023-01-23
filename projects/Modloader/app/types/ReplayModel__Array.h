#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReplayModel__Array__Class.h>
#include <Modloader/app/structs/ReplayModel__Array.h>

namespace app::classes::types {
    namespace ReplayModel__Array {
        namespace {
            inline app::ReplayModel__Array__Class* type_info_ref = nullptr;
        }
        inline app::ReplayModel__Array__Class** type_info = &type_info_ref;
        inline app::ReplayModel__Array__Class* get_class() {
            return il2cpp::get_class<app::ReplayModel__Array__Class>(type_info, "", "ReplayModel[]");
        }
        inline app::ReplayModel__Array* create() {
            return il2cpp::create_object<app::ReplayModel__Array>(get_class());
        }
    } // namespace ReplayModel__Array
} // namespace app::classes::types
