#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X520_Title__Class.h>
#include <Modloader/app/structs/X520_Title.h>

namespace app::classes::types {
    namespace X520_Title {
        inline app::X520_Title__Class** type_info = (app::X520_Title__Class**)(modloader::win::memory::resolve_rva(0x04758050));
        inline app::X520_Title__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_Title__Class>(type_info, "Mono.Security.X509", "X520", "Title");
        }
        inline app::X520_Title* create() {
            return il2cpp::create_object<app::X520_Title>(get_class());
        }
    } // namespace X520_Title
} // namespace app::classes::types
