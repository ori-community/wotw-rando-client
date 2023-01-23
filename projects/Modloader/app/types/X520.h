#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X520__Class.h>
#include <Modloader/app/structs/X520.h>

namespace app::classes::types {
    namespace X520 {
        namespace {
            inline app::X520__Class* type_info_ref = nullptr;
        }
        inline app::X520__Class** type_info = &type_info_ref;
        inline app::X520__Class* get_class() {
            return il2cpp::get_class<app::X520__Class>(type_info, "Mono.Security.X509", "X520");
        }
        inline app::X520* create() {
            return il2cpp::create_object<app::X520>(get_class());
        }
    } // namespace X520
} // namespace app::classes::types
