#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenesToSkip__Class.h>
#include <Modloader/app/structs/ScenesToSkip.h>

namespace app::classes::types {
    namespace ScenesToSkip {
        inline app::ScenesToSkip__Class** type_info = (app::ScenesToSkip__Class**)(modloader::win::memory::resolve_rva(0x04732D30));
        inline app::ScenesToSkip__Class* get_class() {
            return il2cpp::get_class<app::ScenesToSkip__Class>(type_info, "", "ScenesToSkip");
        }
        inline app::ScenesToSkip* create() {
            return il2cpp::create_object<app::ScenesToSkip>(get_class());
        }
    } // namespace ScenesToSkip
} // namespace app::classes::types
