#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WorldEvents__Array__Class.h>
#include <Modloader/app/structs/WorldEvents__Array.h>

namespace app::classes::types {
    namespace WorldEvents__Array {
        namespace {
            inline app::WorldEvents__Array__Class* type_info_ref = nullptr;
        }
        inline app::WorldEvents__Array__Class** type_info = &type_info_ref;
        inline app::WorldEvents__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldEvents__Array__Class>(type_info, "", "WorldEvents[]");
        }
        inline app::WorldEvents__Array* create() {
            return il2cpp::create_object<app::WorldEvents__Array>(get_class());
        }
    } // namespace WorldEvents__Array
} // namespace app::classes::types
