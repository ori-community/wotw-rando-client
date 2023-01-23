#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateArchive__Class.h>
#include <Modloader/app/structs/UberStateArchive.h>

namespace app::classes::types {
    namespace UberStateArchive {
        inline app::UberStateArchive__Class** type_info = (app::UberStateArchive__Class**)(modloader::win::memory::resolve_rva(0x04733250));
        inline app::UberStateArchive__Class* get_class() {
            return il2cpp::get_class<app::UberStateArchive__Class>(type_info, "", "UberStateArchive");
        }
        inline app::UberStateArchive* create() {
            return il2cpp::create_object<app::UberStateArchive>(get_class());
        }
    } // namespace UberStateArchive
} // namespace app::classes::types
