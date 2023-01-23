#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TermInfoReader__Class.h>
#include <Modloader/app/structs/TermInfoReader.h>

namespace app::classes::types {
    namespace TermInfoReader {
        inline app::TermInfoReader__Class** type_info = (app::TermInfoReader__Class**)(modloader::win::memory::resolve_rva(0x04722EB8));
        inline app::TermInfoReader__Class* get_class() {
            return il2cpp::get_class<app::TermInfoReader__Class>(type_info, "System", "TermInfoReader");
        }
        inline app::TermInfoReader* create() {
            return il2cpp::create_object<app::TermInfoReader>(get_class());
        }
    } // namespace TermInfoReader
} // namespace app::classes::types
