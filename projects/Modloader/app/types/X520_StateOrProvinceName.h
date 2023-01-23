#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X520_StateOrProvinceName__Class.h>
#include <Modloader/app/structs/X520_StateOrProvinceName.h>

namespace app::classes::types {
    namespace X520_StateOrProvinceName {
        inline app::X520_StateOrProvinceName__Class** type_info = (app::X520_StateOrProvinceName__Class**)(modloader::win::memory::resolve_rva(0x047119A8));
        inline app::X520_StateOrProvinceName__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_StateOrProvinceName__Class>(type_info, "Mono.Security.X509", "X520", "StateOrProvinceName");
        }
        inline app::X520_StateOrProvinceName* create() {
            return il2cpp::create_object<app::X520_StateOrProvinceName>(get_class());
        }
    } // namespace X520_StateOrProvinceName
} // namespace app::classes::types
