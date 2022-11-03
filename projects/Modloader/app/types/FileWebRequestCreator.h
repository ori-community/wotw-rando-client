#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileWebRequestCreator {
        inline app::FileWebRequestCreator__Class** type_info = (app::FileWebRequestCreator__Class**)(modloader::win::memory::resolve_rva(0x04751258));
        inline app::FileWebRequestCreator__Class* get_class() {
            return il2cpp::get_class<app::FileWebRequestCreator__Class>(type_info, "System.Net", "FileWebRequestCreator");
        }
        inline app::FileWebRequestCreator* create() {
            return il2cpp::create_object<app::FileWebRequestCreator>(get_class());
        }
    } // namespace FileWebRequestCreator
} // namespace app::classes::types
