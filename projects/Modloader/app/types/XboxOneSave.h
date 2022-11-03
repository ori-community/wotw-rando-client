#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneSave {
        inline app::XboxOneSave__Class** type_info = (app::XboxOneSave__Class**)(modloader::win::memory::resolve_rva(0x04719B38));
        inline app::XboxOneSave__Class* get_class() {
            return il2cpp::get_class<app::XboxOneSave__Class>(type_info, "", "XboxOneSave");
        }
        inline app::XboxOneSave* create() {
            return il2cpp::create_object<app::XboxOneSave>(get_class());
        }
    } // namespace XboxOneSave
} // namespace app::classes::types
