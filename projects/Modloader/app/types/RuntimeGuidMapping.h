#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeGuidMapping__Class.h>
#include <Modloader/app/structs/RuntimeGuidMapping.h>

namespace app::classes::types {
    namespace RuntimeGuidMapping {
        inline app::RuntimeGuidMapping__Class** type_info = (app::RuntimeGuidMapping__Class**)(modloader::win::memory::resolve_rva(0x04700EF0));
        inline app::RuntimeGuidMapping__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGuidMapping__Class>(type_info, "", "RuntimeGuidMapping");
        }
        inline app::RuntimeGuidMapping* create() {
            return il2cpp::create_object<app::RuntimeGuidMapping>(get_class());
        }
    } // namespace RuntimeGuidMapping
} // namespace app::classes::types
