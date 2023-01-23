#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StaticEntityLookBehaviour__Class.h>
#include <Modloader/app/structs/StaticEntityLookBehaviour.h>

namespace app::classes::types {
    namespace StaticEntityLookBehaviour {
        namespace {
            inline app::StaticEntityLookBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::StaticEntityLookBehaviour__Class** type_info = &type_info_ref;
        inline app::StaticEntityLookBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StaticEntityLookBehaviour__Class>(type_info, "", "StaticEntityLookBehaviour");
        }
        inline app::StaticEntityLookBehaviour* create() {
            return il2cpp::create_object<app::StaticEntityLookBehaviour>(get_class());
        }
    } // namespace StaticEntityLookBehaviour
} // namespace app::classes::types
