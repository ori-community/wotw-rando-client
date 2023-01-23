#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttachToVerletStructure__Class.h>
#include <Modloader/app/structs/AttachToVerletStructure.h>

namespace app::classes::types {
    namespace AttachToVerletStructure {
        namespace {
            inline app::AttachToVerletStructure__Class* type_info_ref = nullptr;
        }
        inline app::AttachToVerletStructure__Class** type_info = &type_info_ref;
        inline app::AttachToVerletStructure__Class* get_class() {
            return il2cpp::get_class<app::AttachToVerletStructure__Class>(type_info, "", "AttachToVerletStructure");
        }
        inline app::AttachToVerletStructure* create() {
            return il2cpp::create_object<app::AttachToVerletStructure>(get_class());
        }
    } // namespace AttachToVerletStructure
} // namespace app::classes::types
